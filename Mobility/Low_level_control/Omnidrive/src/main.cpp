//Test Serial Comunication
//By TsBeNz  %%  KusaKunG copy to edit
#include "mbed.h"
Serial PC(USBTX, USBRX);
DigitalIn button(USER_BUTTON);

Serial pc(USBTX, USBRX); // tx, rx
DigitalIn sw(USER_BUTTON);
PwmOut FLWheel(D5);
PwmOut FRWheel(D4);
PwmOut BLWheel(D3);
PwmOut BRWheel(D2);
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
char buffyon[3];
char buffyx[5];
char buffyy[5];

#define PI 3.141592
float FL=0;
float FR=0;
float BL=0;
float BR=0;
float Vx;
float Vy;

  void GO(float Vx,float Vy)
  {
    FL =(Vx - Vy)/200.0; 
    FR =(Vx + Vy)/200.0; 
    BL =(Vx + Vy)/200.0; 
    BR =(Vx - Vy)/200.0;
    pc.printf("%.2f\t%.2f\t%.2f\t%.2f\n",FL,FR,BL,BR);
  
    ///FL***
    if (FL>0){
      FrontLF=1;
      FrontLB=0;
      FLWheel.write(FL);
    }
    else if (FL<0){
      FrontLF=0;
      FrontLB=1;
      FLWheel.write(-FL);
    }
    else if(FL == 0){
      FrontLF=0;
      FrontLB=0;
      FLWheel.write(0);
    }
    ///FR***
    if (FR>0){
      FrontRF=1;
      FrontRB=0;
      FRWheel.write(FR);
    }
    else if (FR<0){
      FrontRF=0;
      FrontRB=1;
      FRWheel.write(-FR);
    }
    else if(FR == 0){
      FrontLF=0;
      FrontLB=0;
      FRWheel.write(0);
    }
    ///BL***
    if (BL>0){
      BackLF=1;
      BackLB=0;
      BLWheel.write(BL);
    }
    else if (BL<0){
      BackLF=0;
      BackLB=1;
      BLWheel.write(-BL);
    }
    else if(BL == 0){
      BackLF=0;
      BackLB=0;
      BLWheel.write(0);
    }
    ///BR***
    if (BR>0){
      BackRF=1;
      BackRB=0;
      BRWheel.write(BR);
    }
    else if (BR<0){
      BackRF=0;
      BackRB=1;
      BRWheel.write(-BR);
    }
    else if(BR == 0){
      BackRF=0;
      BackRB=0;
      BRWheel.write(0);
    }

  }
  
int main()
{
  pc.printf("Hello,OmniDriver\n");
  pc.printf("0.00<= Vx,Vy <=100.00\n");

  FLWheel.write(0);
  FRWheel.write(0);
  BLWheel.write(0);
  BRWheel.write(0);
  
  Vx=0;
  Vy=0;
  
  FrontLF = 0;
  FrontLB = 0;
  FrontRF = 0;
  FrontRB = 0;
  BackLF = 0;
  BackLB = 0;
  BackRF = 0;
  BackRB = 0;

  while(1){
  pc.gets(buffyon,3);
  pc.printf("I got '%s'\n", buffyon);
  if (strcmp(buffyon, "Vx") == 0){
    pc.gets(buffyx,5);
    pc.printf("I got Vx ='%s'\n", buffyx);
    Vx=atoi(buffyx);
  }else if(strcmp(buffyon, "Vy") == 0){
    pc.gets(buffyy,5);
    pc.printf("I got Vy = '%s'\n", buffyy);
    Vy=atoi(buffyy);
  }else if(strcmp(buffyon, "xx") == 0){
    Vx=0; 
    Vy=0;
    pc.printf("Stop!!\n");
    pc.printf("Vx = '%.2f', Vy = '%.2f'\n", Vx,Vy);
    GO(Vx,Vy);
    wait(0.1);
  }else if(strcmp(buffyon, "cc") == 0){
    pc.printf("Continue!!\n");
    pc.printf("Vx = '%.2f', Vy = '%.2f'\n", Vx,Vy);
    GO(Vx,Vy);
    wait(0.1);
  }else if (Vx !=0 || Vy !=0){
    pc.printf("Vx = '%.2f', Vy = '%.2f'\n", Vx,Vy);
    GO(Vx,Vy);
    wait(0.1);
  }
  pc.printf("Vx = '%.2f', Vy = '%.2f'\n", Vx,Vy);
  }
}