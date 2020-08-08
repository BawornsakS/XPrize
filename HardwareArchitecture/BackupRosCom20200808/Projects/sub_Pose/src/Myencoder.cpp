#include <mbed.h>
#include <Myencoder.h>
Myencoder::Myencoder(PinName pin){
    cs = new DigitalOut(pin);
    *cs = 1;
    
}

// void Myencoder::set_spi(PinName MOSI,PinName MISO,PinName SCK){
//     spi = new SPI(MOSI,MISO,SCK);
// }

int Myencoder::read_enc(SPI &spi){
  *cs= 0;
  spi.write(0xFFFF);
  *cs= 1;
  wait_us(1);
  *cs= 0;
  w = spi.write(0x0000);
  *cs= 1;
  w = w & 0x3FF0;
  return w;
}

void Myencoder::enc_offset(SPI &spi){
    for (int i=0;i<4;i++){
    *cs = 1;
    *cs = 0;
    spi.write(0xFFFF);
    *cs = 1;
    wait_us(1);
    *cs = 0;
    setoffset = spi.write(0x0000);
    *cs = 1;
    setoffset = (setoffset & 0x3FF0);
    }
}

Motor::Motor(PinName ina,PinName inb,PinName pwm){
    outa = new DigitalOut(ina);
    outb = new DigitalOut(inb);
    pwmf = new PwmOut(pwm);
}

void Motor::drive(float value){
    if(value>0){
        *outa = 1;
        *outb = 0;
    }
    else if(value<0){
        *outa = 0;
        *outb = 1;
    }
    else if(value == 0){
        *outa = 0;
        *outb = 0;
    }
    if(abs(value) > 1){
        value = 1;
    }
    pwmf->write(abs(value));
}