#include <mbed.h>

namespace baseDrive{
    class Wheel{
    public:
        Wheel(PinName in_pwmf,PinName in_pwmb);
        //  void setValue(float value);
        void drive(float value);
    private:
        // DigitalOut *outf,*outb;
        float value;
        PwmOut *pwmf,*pwmb;
    };
    class Driver{
    public:
        // Driver();
        void setWheel(int position,PinName pwmf,PinName pwmb);
        void drive(float Vx,float Vy,float Wz,float speed_satuated);
        float value[4];
        // void setPID(int position)
        
    private:
        Wheel* wheel[4];
        
        // float d_term,i_term;
        // float k_p,k_i,k_d;
        // float pid_controller_imu(float k_p,float k_i,float k_d,float error_theta2,float &pre_error,float &i_term,float &d_term);
    };
}
