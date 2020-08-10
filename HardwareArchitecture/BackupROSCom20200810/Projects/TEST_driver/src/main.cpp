#include <mbed.h>
//FL
DigitalOut ina(D4);
DigitalOut inb(D2);
PwmOut pwm(PB_3);
//FR
DigitalOut ina1(D7);
DigitalOut inb1(D8);
PwmOut pwm1(PB_4);
//BL
DigitalOut ina2(D9);
DigitalOut inb2(D10);
PwmOut pwm2(PB_10);
//BR
DigitalOut ina3(D12);
DigitalOut inb3(D13);
PwmOut pwm3(PA_7);
int main() {
  ina =1;
  inb =0;
  ina1 =1;
  inb1 =0;
  ina =1;
  inb =0;
  ina =1;
  inb =0;
  
  // wait(1.0);
  // ina =0;
  // inb = 1;
  // for(int i=0;i<=1;i= i+0.1){
  //   pwm1.write(i);
  //   wait(0.5);
  // }
  while(1) {
    
  }
}