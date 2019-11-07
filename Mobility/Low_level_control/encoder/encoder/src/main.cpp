#include "mbed.h"
#include "math.h"

SPI spi(D11, D12, D13); // mosi, miso, sclk

// D11 ต่อกับขา MOSI ของ Encoder
// D12 ต่อกับขา MISO ของ Encoder
// D13 ต่อกับขา CLK ของ Encoder

DigitalOut cs4(D7);
DigitalOut cs3(D8);
DigitalOut cs2(D9);
DigitalOut cs(D10);

// D10 ต่อกับขา CS ของ Encoder
// CS ใช้ในการ chip select เพื่อใช้ในการเลือกรับส่งข้อมูลกับ slave
Serial pc(USBTX, USBRX);

Timer t;

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
  w = w & 0x3FFF;
  //w=w/2;
  //pc.printf("%X\n", x);
  return w;

}
int encoder2()
{

  static int w2;
  cs2 = 1;
  cs2 = 0;
  spi.write(0xFFFF);
  cs2 = 1;
  wait_us(1);
  cs2 = 0;
  w2 = spi.write(0x0000);
  cs = 1;
  w2 = w2 & 0x3FFF;
  //w=w/2;
  //pc.printf("%X\n", x);
  return w2;

}
int main() 
{
  int ang1 = 0;
  int ang2 = 0;

  int ang12 = 0;
  int ang22 = 0;
  int W;
  int W2;
  int time;
  spi.format(16,1);
  spi.frequency(1000000);
  cs = 1;
  t.start();
  int t2;
  int dt = 100;
  int ds = 500;
  // ----------- main loop ----------
  while(1)
  {

    time = t.read_ms();
    t2 = t.read_us();
    if(time == 0)
    {
      ang1 = encoder();
      ang12 = encoder2();
    }

    if(time == dt)
    {
      ang2 = encoder();
      ang22 = encoder2();
      if(ang2>ang1)
      {
        W = (ang2-ang1);
        W = (W*60*1000)/(16383*dt);
        W = hexadecimal_to_decimal(W);
        pc.printf("%X : ",W);
        pc.printf(" + ");
        pc.printf("%X : ",ang1);
        pc.printf("%X\n",ang2);
      }
<<<<<<< HEAD
      else if (ang1 > ang2)
      {
        W = (ang1 - ang2);
        W = (W*60*1000)/(16383*dt);
        W = hexadecimal_to_decimal(W);
        pc.printf("%X : ",W);
        pc.printf(" - ");
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
=======
      if(ang22>ang12)
      {
        W2 = (ang22-ang12);
      }

      W = (W*60*1000)/(16383*dt);
      W2 = (W2*60*1000)/(16383*dt);

      pc.printf("%X : ",W);
      pc.printf("%X\n",W2);
>>>>>>> b47c0f835c9dd788293f5af32ed12ae0c917f5fd
      ang1 = 0;
      ang2 = 0;
      ang12 = 0;
      ang22 = 0;
      t.reset();
    }
  }
}


