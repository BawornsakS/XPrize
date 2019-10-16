//Test Serial Comunication
//By TsBeNz
#include "mbed.h"

Serial pc(USBTX, USBRX); // tx, rx
DigitalIn sw(USER_BUTTON);

int main()
{
  pc.printf("Hello World\n");
  while (true)
  {
    if (pc.readable())
    {
      char c = pc.getc();
      switch (c)
      {
      case 'a':
        pc.printf("A in comming\n");
        break;
      case 's':
        pc.printf("S in comming\n");
        break;
      default:
        pc.printf("i don't know!!\n");
      }
    }
    if(!sw){
      while (!sw);      
      pc.printf("From nucleo\n");
    }
  }
}