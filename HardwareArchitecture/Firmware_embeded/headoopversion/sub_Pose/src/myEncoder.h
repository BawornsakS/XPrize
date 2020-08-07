#include <mbed.h>
    class myEncoder{
    public:
        myEncoder(PinName cs1,PinName cs2,PinName cs3,PinName cs4);
        int read_enc(int position);
        void set_spi(PinName MOSI,PinName MISO,PinName SCK);
        int enc_offset();
        DigitalOut *cs[4];
        SPI *spi;
        int *setoffset[4];
    };

    class motor{
    public:
        motor(PinName ina,PinName inb,PinName pwm);
        void drive(float value);
    private:
        float value;
        PwmOut *pwmf;
        DigitalOut *outa, *outb;
    };
    