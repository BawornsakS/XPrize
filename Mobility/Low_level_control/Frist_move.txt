//Test Serial Comunication
//By TsBeNz  %%  KusaKunG copy to edit
#include "mbed.h"
// Front left wheel
DigitalOut FrontLF(D13); // front left forword
DigitalOut FrontLB(D12); // front left backword
// Front right wheel
DigitalOut FrontRF(D11);
DigitalOut FrontRB(D10);
// Back left wheel
DigitalOut BackLF(D9);
DigitalOut BackLB(D8);
// Back right wheel
DigitalOut BackRF(D7);
DigitalOut BackRB(D6);
Serial PC(USBTX, USBRX);
DigitalIn button(USER_BUTTON);

Serial pc(USBTX, USBRX); // tx, rx
DigitalIn sw(USER_BUTTON);

int main()
{
  FrontLF = 0;
  FrontLB = 0;
  FrontRF = 0;
  FrontRB = 0;
  BackLF = 0;
  BackLB = 0;
  BackRF = 0;
  BackRB = 0;
  pc.printf("Hello World\n");
  while (true)
  {
    if (pc.readable())
    {
      char c = pc.getc();
      switch (c)
      {
      case 'w':
        pc.printf("W in comming\n");
        FrontLF = 1;
        FrontLB = 0;
        FrontRF = 1;
        FrontRB = 0;
        BackLF = 1;
        BackLB = 0;
        BackRF = 1;
        BackRB = 0;
        break;
      case 's':
        pc.printf("S in comming\n");
        FrontLF = 0;
        FrontLB = 1;
        FrontRF = 0;
        FrontRB = 1;
        BackLF = 0;
        BackLB = 1;
        BackRF = 0;
        BackRB = 1;
        break;
      case 'a':
        pc.printf("A in comming\n");
        FrontLF = 0;
        FrontLB = 1;
        FrontRF = 1;
        FrontRB = 0;
        BackLF = 1;
        BackLB = 0;
        BackRF = 0;
        BackRB = 1;
        break;
      case 'd':
        pc.printf("D in comming\n");
        FrontLF = 1;
        FrontLB = 0;
        FrontRF = 0;
        FrontRB = 1;
        BackLF = 0;
        BackLB = 1;
        BackRF = 1;
        BackRB = 0;
        break;
      case 'x':
        pc.printf("x in comming\n");
        FrontLF = 0;
        FrontLB = 0;
        FrontRF = 0;
        FrontRB = 0;
        BackLF = 0;
        BackLB = 0;
        BackRF = 0;
        BackRB = 0;
        break;
      case 'e':
        pc.printf("Going To E\n");
        FrontLF = 1;
        FrontLB = 0;
        FrontRF = 0;
        FrontRB = 0;
        BackLF = 0;
        BackLB = 0;
        BackRF = 1;
        BackRB = 0;
        break;
      case 'q':
        pc.printf("Going To Q\n");
        FrontLF = 0;
        FrontLB = 0;
        FrontRF = 1;
        FrontRB = 0;
        BackLF = 1;
        BackLB = 0;
        BackRF = 0;
        BackRB = 0;
        break;
      case 'z':
        pc.printf("Going To Z\n");
        FrontLF = 0;
        FrontLB = 1;
        FrontRF = 0;
        FrontRB = 0;
        BackLF = 0;
        BackLB = 0;
        BackRF = 0;
        BackRB = 1;
        break;
      case 'c':
        pc.printf("Going To C\n");
        FrontLF = 0;
        FrontLB = 0;
        FrontRF = 0;
        FrontRB = 1;
        BackLF = 0;
        BackLB = 1;
        BackRF = 0;
        BackRB = 0;
        break;
      default:
        pc.printf("i don't know!!\n");
      }
    }
    if (!sw)
    {
      while (!sw)
        ;
      pc.printf("From nucleo\n");
    }
  }
}