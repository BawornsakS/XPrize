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
Timer t_count;

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
  w = w & 0x3FF0;
  //w=w/2;
  //pc.printf("                   %X\n", w);
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
  cs2 = 1;
  w2 = w2 & 0x3FFF;
  //w=w/2;
  //pc.printf("%X\n", x);
  return w2;
}

int encoder3()
{

  static int w3;
  cs3 = 1;
  cs3 = 0;
  spi.write(0xFFFF);
  cs3 = 1;
  wait_us(1);
  cs3 = 0;
  w3 = spi.write(0x0000);
  cs3 = 1;
  w3 = w3 & 0x3FFF;
  //w=w/2;
  //pc.printf("%X\n", w3);
  return w3;
}

int encoder4()
{

  static int w4;
  cs4 = 1;
  cs4 = 0;
  spi.write(0xFFFF);
  cs4 = 1;
  wait_us(1);
  cs4 = 0;
  w4 = spi.write(0x0000);
  cs4 = 1;
  w4 = w4 & 0x3FFF;
  //w=w/2;
  //pc.printf("%X\n", x);
  return w4;
}
int main() 
{
  int ang1 = 0;
  int ang2 = 0;

  int ang12 = 0;
  int ang22 = 0;

  int ang13 =0;
  int ang23 = 0;

  int ang14 = 0;
  int ang24 = 0;

  int diff;
  int diff2;
  int diff3;
  int diff4;

  int W;
  int W2;
  int W3;
  int W4;

  int time;
  int time_count;

  spi.format(16,1);
  spi.frequency(10000000);
  
  cs = 1;
  cs2 = 1;
  cs3 = 1;
  cs4 = 1;

  t.start();
  t_count.start();
  int dt = 25;

  int radius = 8;//mm
  int Velocity = 0;
  int Vx;
  int Vy;
  int Wz;
  int distance = 0;
  int distanceX  = 0;
  int distanceY = 0;
  int O = 0;
  // ----------- main loop ----------
  while(1)
  {
    time = t.read_ms();
    if(time == 0)
    {
      ang1 = encoder();
      wait_us(5);
      ang12 = encoder2();
      wait_us(5);
      ang13 = encoder3();
      wait_us(5);
      ang14 = encoder4();
      wait_us(5);
    }



    if(time == dt)
    {
      ang2 = encoder();
      ang22 = encoder2();
      ang23 = encoder3();
      ang24 = encoder4();


      diff = ang2-ang1;
      diff2 = ang22-ang12;
      diff3 = ang23-ang13;
      diff4 = ang24-ang14;

      if(diff > 16384/2)
      {
        diff = diff - 16384;
      }
      if(diff < -16384/2)
      {
        diff = (16384 + diff);
      }

      if(diff2 > 16384/2)
      {
        diff2 = diff2 - 16384;
      }
      if(diff2 < -16384/2)
      {
        diff2 = (16384 + diff2);
      }

      if(diff3 > 16384/2)
      {
        diff3 = diff3 - 16384;
      }
      if(diff3 < -16384/2)
      {
        diff3 = (16384 + diff3);
      }

      if(diff4 > 16384/2)
      {
        diff4 = diff4 - 16384;
      }
      if(diff4 < -16384/2)
      {
        diff4 = (16384 + diff4);
      }

      

       W = (diff*60*1000)/(16384*time);//rpm
       W2 = (diff2*60*1000)/(16384*time);//rpm
       W3 = (diff3*60*1000)/(16384*time);//rpm
       W4 = (diff4*60*1000)/(16384*time);//rpm

      //W = (diff*2*3.14*1000)/(16383*time)/14;
      //W2 = (W2*2*3.14*1000)/(16383*time);
      //W3 = (W3*2*3.14*1000)/(16383*time);
      //W4 = (W4*2*3.15*1000)/(16383*time);

      Vx = (W2 + W4 - W - W3) * radius/4;
      Vy = (W + W2 + W3 + W4) * radius/4;
      Wz = (W2+W4-W-W3)*radius/(280*4);

      Velocity = (W*radius*2*3.14)/60;
      distance = distance +(Velocity*time);
      distanceX = distanceX +(Vx*time);
      distanceY = distanceY +(Vy*time);
      O = O + (Wz*time);
      

      //  pc.printf("%d : ",diff);
      //  pc.printf("%d : ",W);
       pc.printf("%d\n",distance);
      // pc.printf("%X\n",W4);

      ang1 = 0;
      ang2 = 0;
      ang12 = 0;
      ang22 = 0;
      ang13 = 0;
      ang23 = 0;
      ang14 = 0;
      ang24 = 0;
      t.reset();
    }
  }
}