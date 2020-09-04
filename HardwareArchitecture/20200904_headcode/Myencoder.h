#include <mbed.h>

    class Myencoder{ // ชื่อคลาสตัวใหญ่ -_- จำไว้ซะะะะ
    public:
        Myencoder(PinName pin);
        int read_enc(SPI &spi);
        // int read_encchk(SPI &spi);
        // void set_spi(PinName MOSI,PinName MISO,PinName SCK);
        void enc_offset(SPI &spi);

        DigitalOut *cs;
        int setoffset;
        int w;
    };

    class Motor{
    public:
        Motor(PinName ina,PinName inb,PinName pwm);
        void drive(float value);
        DigitalOut *outa, *outb;
    private:
        float value;
        PwmOut *pwmf;
        
    };
    