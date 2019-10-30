#include "mbed.h"
#include "math.h"

SPI spi(D11, D12, D13); // mosi, miso, sclk

// D11 ต่อกับขา MOSI ของ Encoder
// D12 ต่อกับขา MISO ของ Encoder
// D13 ต่อกับขา CLK ของ Encoder

DigitalOut cs(D10);

// D10 ต่อกับขา CS ของ Encoder
// CS ใช้ในการ chip select เพื่อใช้ในการเลือกรับส่งข้อมูลกับ slave
Serial pc(USBTX, USBRX);

Timer t;
int hexadecimal_to_decimal(int x)
{
      int decimal_number, remainder, count = 0;
      while(x > 0)
      {
            remainder = x % 10;
            decimal_number = decimal_number + remainder * pow(16, count);
            x = x / 10;
            count++;
      }
      return decimal_number;
}


int encoder()
{

  static int w;
  cs = 1;
  cs = 0;
  spi.write(0xFFFF);
  cs = 1;
  wait_us(1);
  cs = 0;
  w = spi.write(0x0000);
  cs = 1;
  w = w & 0x3FFC;
  //w=w/2;
  //pc.printf("%X\n", x);
  return w;

}
int main() 
{
  int ang1 = 0;
  int ang2 = 0;
  int W;
  int time;
  spi.format(16,1);
  spi.frequency(1000000);
  cs = 1;
  t.start();
  int t2;
  int dt = 10;
  int ds = 500;
  int prev_rpm;
  // ----------- main loop ----------
  while(1)
  {
    //pc.printf(".\n");
    time = t.read_ms();
    t2 = t.read_us();
    if(time == 0)
    {
      ang1 = encoder();
    }
    //ang2 = encoder();
    //if((ang2-ang1) >= ds)
    //{
      //t2 = t.read_ms();
    //  W = (ds*60*1000000)/(16383*t2); 
    //  W = hexadecimal_to_decimal(W);
    //  pc.printf("%X : ",t2);
    //  pc.printf("%X : \n",W);
    //  t.reset();
    //}
    
    if(time == dt)
    {
      ang2 = encoder();
      if(ang2>ang1)
      {
        W = (ang2-ang1);
        W = (W*60*1000)/(16383*dt);
        W = hexadecimal_to_decimal(W);
        pc.printf("%X : ",W);
        pc.printf(" + : ");
        pc.printf("%X : ",ang1);
        pc.printf("%X\n",ang2);
      }
      else if (ang1 > ang2)
      {
        W = (ang1 - ang2);
        W = (W*60*1000)/(16383*dt);
        W = hexadecimal_to_decimal(W);
        pc.printf("%X : ",W);
        pc.printf(" -  :");
        pc.printf("%X : ",ang1);
        pc.printf("%X\n",ang2);
      }
      
      // else if(ang1 > ang2)
      // {
      //   W = -(ang1-ang2);
      // }
      //else if(ang1>ang2)
      //{
      //  W = (ang2+16383-ang1);
      //}
      ang1 = 0;
      ang2 = 0;
      t.reset();
    }
  }
}


