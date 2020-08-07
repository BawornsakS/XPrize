#include <mbed.h>

namespace baseDrive{
    class Wheel{
    public:
        Wheel(PinName ina, PinName inb, PinName pwm);
        //  void setValue(float value);
        void drive(float value);
        // void hwdrive(float value);
    private:
        // DigitalOut *outf,*outb;
        float value;
        PwmOut *pwmf;
        DigitalOut *outa, *outb;
    };
    class Driver{
    public:
        // Driver();
        void setWheel(int position,PinName ina, PinName inb, PinName pwm);
        void drive(float Vx,float Vy,float Wz,float speed_satuated);
        // void hwsetWheel(int position,PinName ina, PinName inb, PinName pwm);
        float value[4];
        // void setPID(int position)
        
    private:
        Wheel* wheel[4];
        
        // float d_term,i_term;
        // float k_p,k_i,k_d;
        // float pid_controller_imu(float k_p,float k_i,float k_d,float error_theta2,float &pre_error,float &i_term,float &d_term);
    };
}
