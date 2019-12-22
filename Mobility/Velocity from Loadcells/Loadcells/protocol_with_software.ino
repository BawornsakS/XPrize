#include <Arduino.h>
#include <math.h>
#include <SoftwareSerial.h>
SoftwareSerial mySerial(2, 3); // TX, RX
String data;
#include "HX711.h"
long  FindZeroFactor1();
long  FindZeroFactor2();
long  FindZeroFactor3();
long  FindZeroFactor4();
long  FindZeroFactor5();
long  FindZeroFactor6();
long  FindZeroFactor7();
long  FindZeroFactor8();
float calibration_factor1 = 44413.00;
long zero_factor1 = 8232136;
#define DOUT1  A0
#define CLK1   A1
#define DEC_POINT  2

float calibration_factor2 = 41697.00;
long zero_factor2 = 8296008;
#define DOUT2  A2
#define CLK2   A3

float calibration_factor3 = 43288.00;
long zero_factor3 = 8643114;
#define DOUT3 A4
#define CLK3  A5


float calibration_factor4 = 43955.00;
long zero_factor4 = 8356231;
#define DOUT4  A6
#define CLK4   A7


float calibration_factor5 = 44996.00;
long zero_factor5 = 8648751;
#define DOUT5  A8
#define CLK5   A9

float calibration_factor6 = 40682.00;
long zero_factor6 = 8617308;
#define DOUT6 A10
#define CLK6  A11


float calibration_factor7 = 45062.00;
long zero_factor7 = 8753369;
#define DOUT7  A12
#define CLK7   A13

float calibration_factor8 = 43946.00;
long zero_factor8 = 8330019;
#define DOUT8  A14
#define CLK8   A15


float offset = 0;
float get_units_kg1();
float get_units_kg2();
float get_units_kg3();
float get_units_kg4();
float get_units_kg5();
float get_units_kg6();
float get_units_kg7();
float get_units_kg8();


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
#define angle1 pi/4
#define angle2 pi/4
#define angle3 pi/4
#define angle4 pi/4
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


float c1; // weight on L1
float L1 = map(c1, 0, 50, 0, 2000) ; // Map weight first
float c2; // weight on L1
float L2 = map(c1, 0, 50, 0, 2000) ;
float c3; // weight on L1
float L3 = map(c1, 0, 50, 0, 200) ;
float c4; // weight on L1
float L4 = map(c1, 0, 50, 0, 200) ;
float Magnitude(float , float , float , float , float , float , float , float ) ;
float Direction(float , float) ;
String command_out(float);
float sumx = 0;
float sumy = 0;
int VR;
int startbit=0xFFFF;
byte checksum;
void setup() {
  Serial.begin(115200) ;
  mySerial.begin(115200);
  float M;
  float D;
  M = Magnitude(100, 0, 100, 0, 100, 0, 100, 0);
  D = Direction(sumx, sumy);
  Serial.println(sumx) ;
  Serial.println(sumy) ;
  Serial.println(M) ;
  Serial.println(D) ;
  Serial.println("Load Cell");
  zero_factor1 = FindZeroFactor1();
  zero_factor2 = FindZeroFactor2();
  zero_factor3 = FindZeroFactor3();
  zero_factor4 = FindZeroFactor4();
  zero_factor5 = FindZeroFactor5();
  zero_factor6 = FindZeroFactor6();
  zero_factor7 = FindZeroFactor7();
  zero_factor8 = FindZeroFactor8();


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
}

void loop() {
  int load1 = 0, load2 = 0, load3 = 0, load4 = 0;
  float data1 = float(get_units_kg1() + offset);
  float data2 = float(get_units_kg2() + offset);
  float data3 = float(get_units_kg3() + offset);
  float data4 = float(get_units_kg4() + offset);
  float data5 = float(get_units_kg5() + offset);
  float data6 = float(get_units_kg6() + offset);
  float data7 = float(get_units_kg7() + offset);
  float data8 = float(get_units_kg8() + offset);
//  Serial.print("#");
//  Serial.print(data1);
//  Serial.print("#");
//  Serial.print(data2* cos(angle4));
//  Serial.print("#");
//  Serial.print(data3);
//  Serial.print("#");
//  Serial.print(data4* cos(angle4));
//  Serial.print("#");
//  Serial.print(data5);
//  Serial.print("#");
//  Serial.print(data6* cos(angle4));
//  Serial.print("#");
//  Serial.print(data7);
//  Serial.print("#");
//  Serial.print(data8* cos(angle4));
//  Serial.println("#");

  float M = Magnitude(data1 * 7, data2 * 7 , data3 * 7, data4 * 7, data5 * 7, data6 * 7, data7 * 7, data8 * 7);
  float D = Direction(sumx, sumy);
  byte buffers[7];
    int int_x = sumx;
  int int_y = sumy;
  buffers[0] = 0xFF;
  buffers[1] = 0xFF;
  buffers[2] = int_x>>8;
  buffers[3] = int_x%256;
  buffers[4] = int_y>>8;
  buffers[5] = int_y%256;
  buffers[6] = (buffers[2]+buffers[3]+buffers[4]+buffers[5])%256;
  Serial.write(buffers,7);
//int a = mySerial.availableForWrite();
//Serial.println(a);
//  for(int i=0;i<7;i++){
//    int a = buffers[i];
//    Serial.print(a);
//    Serial.print(' ');
//  }
//  Serial.println("");
//Serial.print(int_x);
//Serial.println(int_y);
}

float Magnitude(float L1 = 0, float L2 = 0, float L3 = 0, float L4 = 0, float L5 = 0, float L6 = 0, float L7 = 0, float L8 = 0 )
{
  if (L2 && L4 && L6 && L8 == 0) {
    float result;
    sumx =  L1 - L5  ;
    sumy =  L7 - L3  ;
    result = sqrt( pow(sumx, 2) + pow(sumy, 2) ) ;
    return result ;
  } else {
    float result;
    sumx = L1 + (L2 * cos(angle1)) - (L4 * cos(angle2)) - L5 - (L6 * cos(angle3) - (L8 * cos(angle4))) ;
    sumy = (-L3) - (L2 * sin(angle1)) - (L4 * sin(angle2)) + L7 + (L6 * sin(angle3) + (L8 * sin(angle4))) ;
    result = sqrt( pow(sumx, 2) + pow(sumy, 2) ) ;
    return result ;
  }
}

float Direction(float X = 0, float Y = 0)
{
  float Dir ;
  if ( X == 0 && Y != 0 ) {
    if (Y > 0) {
      Dir = 180.00;
      return Dir ;
    } else if (Y < 0) {
      Dir = 0.00;
      return Dir ;
    }

  } else if ( Y == 0 && X != 0 ) {
    if (X > 0) {
      Dir = 90.00;
      return Dir ;
    } else if (X < 0) {
      Dir = -90.00;
      return Dir ;
    }

  } else if ( X == 0 && Y == 0) {
    Dir = 0.00 ;
    return Dir ;
  }
  else {
    Dir = atan2(Y, X) * (180 / pi) ;
    return Dir ;
  }
}


//int command_out(float input) {
//  String buffers;
//  if (input < 0) {
//    buffers += "-";
//    input = input * (-1);
//  }
//  else {
//    buffers += "+";
//  }
//
//  buffers += String(((int)input / 100) % 10);
//  buffers += String(((int)input / 10) % 10);
//  buffers += String(((int)input) % 10);
//  return buffers;
//}


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

////////////////////////////////////////////////////////////////////////////

long FindZeroFactor1()
{
  //  Serial.println("Find Zero Factor");
  // Serial.println("Please wait .....");
  scale1.set_scale();
  scale1.tare();
  long zero_factor = scale1.read_average(20);
  Serial.print("Zero factor: ");
  Serial.println(zero_factor);
  return (zero_factor);
}
long FindZeroFactor2()
{
  //  Serial.println("Find Zero Factor");
  // Serial.println("Please wait .....");
  scale2.set_scale();
  scale2.tare();
  long zero_factor2 = scale2.read_average(20);
  //Serial.print("Zero factor: ");
  //Serial.println(zero_factor);
  return (zero_factor2);
}
long FindZeroFactor3()
{
  //  Serial.println("Find Zero Factor");
  // Serial.println("Please wait .....");
  scale3.set_scale();
  scale3.tare();
  long zero_factor3 = scale3.read_average(20);
  //Serial.print("Zero factor: ");
  //Serial.println(zero_factor);
  return (zero_factor3);
}
long FindZeroFactor4()
{
  scale4.set_scale();
  scale4.tare();
  long zero_factor4 = scale4.read_average(20);
  return (zero_factor4);
}
long FindZeroFactor5()
{
  scale5.set_scale();
  scale5.tare();
  long zero_factor5 = scale5.read_average(20);
  return (zero_factor5);
}
long FindZeroFactor6()
{
  scale6.set_scale();
  scale6.tare();
  long zero_factor6 = scale6.read_average(20);
  return (zero_factor6);
}
long FindZeroFactor7()
{
  scale7.set_scale();
  scale7.tare();
  long zero_factor7 = scale7.read_average(20);
  return (zero_factor7);
}
long FindZeroFactor8()
{
  scale8.set_scale();
  scale8.tare();
  long zero_factor8 = scale8.read_average(20);
  return (zero_factor8);
}
/////////////////////////////////////////////////////////////////////////////
