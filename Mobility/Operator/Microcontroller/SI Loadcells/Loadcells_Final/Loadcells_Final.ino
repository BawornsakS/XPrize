#include <math.h>
#include "HX711.h"

long time_old = 0;
int period = 50, cutoff = 5; // minimum period is 97  <------ from test

String command_out(float);
float sumx = 0, sumy = 0;
int startbit = 0xFFFF;
byte checksum;

float offset1 = 0;
float offset2 = 0;
float offset3 = 0;
float offset4 = 0;
float offset5 = 0;
float offset6 = 0;
float offset7 = 0;
float offset8 = 0;

float calibration_factor1 = 32302.00;
long zero_factor1 = 8378191;
#define DOUT1 A1
#define CLK1 A0

float calibration_factor2 = 31554.00;
long zero_factor2 = 8296607;
#define DOUT2 A3
#define CLK2 A2

float calibration_factor3 = 45577.00;
long zero_factor3 = 8633357;
#define DOUT3 A5
#define CLK3 A4

float calibration_factor4 = 32315.00;
long zero_factor4 = 8360123;
#define DOUT4 A7
#define CLK4 A6

float calibration_factor5 = 32294.00;
long zero_factor5 = 8654103;
#define DOUT5 A9
#define CLK5 A8

float calibration_factor6 = 30182.00;
long zero_factor6 = 8614933;
#define DOUT6 A11
#define CLK6 A10

float calibration_factor7 = 32349.00;
long zero_factor7 = 8750728;
#define DOUT7 A13
#define CLK7 A12

float calibration_factor8 = 32092.00;
long zero_factor8 = 8339744;
#define DOUT8 A15
#define CLK8 A14

HX711 scale1(DOUT1, CLK1);
HX711 scale2(DOUT2, CLK2);
HX711 scale3(DOUT3, CLK3);
HX711 scale4(DOUT4, CLK4);
HX711 scale5(DOUT5, CLK5);
HX711 scale6(DOUT6, CLK6);
HX711 scale7(DOUT7, CLK7);
HX711 scale8(DOUT8, CLK8);

// angle X axis and L2 L4 L6 L8

#define pi 3.14159
#define angle1 pi / 4
#define angle2 pi / 4
#define angle3 pi / 4
#define angle4 pi / 4
// Max kg.->50Kg
// upper limit kg -> 50Kg
// weight interval =[0,50]
// velocity interval =[-200,200] (0,200)
//                     x            // ตั้งแกน ตามแนวแกนของหุ่น
//                     +
//                     L1
//                     |
//             L8      |       L2
//      angle4         |           angle1
// y +  L7 ____________|___________  L3   -
//      angle3         |           angle2
//             L6      |       L4
//                     |
//                      L5
//                     -

void Magnitude(float, float, float, float, float, float, float, float);
void setup()
{
  Serial.begin(1000000);
  scale1.set_scale(calibration_factor1);
  scale1.set_offset(zero_factor1);
  scale2.set_scale(calibration_factor2);
  scale2.set_offset(zero_factor2);
  scale3.set_scale(calibration_factor3);
  scale3.set_offset(zero_factor3);
  scale4.set_scale(calibration_factor4);
  scale4.set_offset(zero_factor4);
  scale5.set_scale(calibration_factor5);
  scale5.set_offset(zero_factor5);
  scale6.set_scale(calibration_factor6);
  scale6.set_offset(zero_factor6);
  scale7.set_scale(calibration_factor7);
  scale7.set_offset(zero_factor7);
  scale8.set_scale(calibration_factor8);
  scale8.set_offset(zero_factor8);
  set_offset();
}

void loop()
{
  long time_new = millis();
  int time_now = time_new - time_old;
  if (time_now >= period)
  {
    time_old = time_new;
    float data1 = float(get_units_kg1() - offset1);
    float data2 = float(get_units_kg2() - offset2);
    float data3 = float(get_units_kg3() - offset3);
    float data4 = float(get_units_kg4() - offset4);
    float data5 = float(get_units_kg5() - offset5);
    float data6 = float(get_units_kg6() - offset6);
    float data7 = float(get_units_kg7() - offset7);
    float data8 = float(get_units_kg8() - offset8);
    Magnitude(data1, data2, data3, data4, data5, data6, data7, data8); // find sumx sumy

    //    Serial.print(String(time_now) + "\t");
    //    Serial.print(String(data1) + "\t" + String(data2) + "\t" + String(data3) + "\t" + String(data4) + "\t" + String(data5) + "\t" + String(data6) + "\t" + String(data7) + "\t" + String(data8));
    //    Serial.println("\t\t" + String(sumx) + " " + String(sumy));

    //    byte buffers[7];
    int int_x = sumx+2000;
    int int_y = sumy+2000;
    
    long buffers = 0;
    buffers = (buffers << 12) | int_x;
    buffers = (buffers << 12) | int_y;
    buffers = (buffers << 2) | ((int_x + int_y) % 4);
    //    buffers[0] = 0xFF;
    //    buffers[1] = 0xFF;
    //    buffers[2] = int_x >> 8;
    //    buffers[3] = int_x % 256;
    //    buffers[4] = int_y >> 8;
    //    buffers[5] = int_y % 256;
    //    buffers[6] = (buffers[2] + buffers[3] + buffers[4] + buffers[5]) % 256;
    Serial.write(buffers);
  }
}

void Magnitude(float L1 = 0, float L2 = 0, float L3 = 0, float L4 = 0, float L5 = 0, float L6 = 0, float L7 = 0, float L8 = 0)
{
  float result;
  sumx = L1 + (L2 * cos(angle1)) - (L4 * cos(angle2)) - L5 - (L6 * cos(angle3) - (L8 * cos(angle4)));
  sumx = (1 / 200 * (pow(sumx, 3)) + (3 * sumx)); //plot 1/200(x^3) + 3x  and x*7
  sumy = (-L3) - (L2 * sin(angle1)) - (L4 * sin(angle2)) + L7 + (L6 * sin(angle3) + (L8 * sin(angle4)));
  sumy = (1 / 200 * (pow(sumy, 3)) + (3 * sumy)); //plot 1/200(x^3) + 3x  and x*7
  if (abs(sumx) <= cutoff)
  {
    sumx = 0;
  }
  else
  {
    sumx -= cutoff;
  }

  if (abs(sumy) <= cutoff)
  {
    sumy = 0;
  }
  else
  {
    sumy -= cutoff;
  }
}

void set_offset()
{
  for (int i = 1; i <= 10; i++)
  {
    offset1 += float(get_units_kg1());
    offset2 += float(get_units_kg2());
    offset3 += float(get_units_kg3());
    offset4 += float(get_units_kg4());
    offset5 += float(get_units_kg5());
    offset6 += float(get_units_kg6());
    offset7 += float(get_units_kg7());
    offset8 += float(get_units_kg8());
    Serial.println("calibrate loadcell " + String(i));
  }
  offset1 /= 10;
  offset2 /= 10;
  offset3 /= 10;
  offset4 /= 10;
  offset5 /= 10;
  offset6 /= 10;
  offset7 /= 10;
  offset8 /= 10;
}

float get_units_kg1()
{
  return (scale1.get_units() * 0.453592);
}
float get_units_kg2()
{
  return (scale2.get_units() * 0.453592);
}
float get_units_kg3()
{
  return (scale3.get_units() * 0.453592);
}
float get_units_kg4()
{
  return (scale4.get_units() * 0.453592);
}
float get_units_kg5()
{
  return (scale5.get_units() * 0.453592);
}
float get_units_kg6()
{
  return (scale6.get_units() * 0.453592);
}
float get_units_kg7()
{
  return (scale7.get_units() * 0.453592);
}
float get_units_kg8()
{
  return (scale8.get_units() * 0.453592);
}
