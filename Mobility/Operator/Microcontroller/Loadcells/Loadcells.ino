#include <Arduino.h>
#include <math.h>
#include <SoftwareSerial.h>
SoftwareSerial mySerial(2, 3); // TX, RX
String data;

// angle X axis and L2 L4 L6 L8


#define pi 3.14159
#define angle1 45
#define angle2 45
#define angle3 45
#define angle4 45
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
float L1 = map(c1, 0, 50, 0, 200) ; // Map weight first
float c2; // weight on L1
float L2 = map(c1, 0, 50, 0, 200) ;
float c3; // weight on L1
float L3 = map(c1, 0, 50, 0, 200) ;
float c4; // weight on L1
float L4 = map(c1, 0, 50, 0, 200) ;
float Magnitude(float , float , float , float , float , float , float , float ) ;
float Direction(float , float) ;
String command_out(float);
float sumx = 0;
float sumy = 0;

void setup() {
  Serial.begin(115200) ;
  mySerial.begin(115200);
  float M;
  float D;
  //M = Magnitude(14.0, 0, 12.0, 0, 9.0, 0, 9.0, 0) ;
  //M = Magnitude(1,50,1,5,8,25,6,24);
  M = Magnitude(100, 0, 100, 0, 100, 0, 100, 0);
  D = Direction(sumx, sumy);
  Serial.println(sumx) ;
  Serial.println(sumy) ;
  Serial.println(M) ;
  Serial.println(D) ;
}

void loop() {
  int load1 = 0, load2 = 0, load3 = 0, load4 = 0;
  while (Serial.available()) {
    char inChar = (char)Serial.read();
    data += inChar;
    if (inChar == '|') {
      int poten0_index = data.indexOf("!");
      int poten1_index = data.indexOf("@");
      int poten2_index = data.indexOf("#");
      int stop_index = data.indexOf("|");
      load1 = (data.substring(0, poten0_index)).toInt();
      load2 = (data.substring(poten0_index + 1, poten1_index)).toInt();
      load3 = (data.substring(poten1_index + 1, poten2_index)).toInt();
      load4 = (data.substring(poten2_index + 1, stop_index)).toInt();
      float M;
      float D;
      M = Magnitude(load1, 0, load2, 0, load3, 0, load4, 0);
      D = Direction(sumx, sumy);
      String buffers = (command_out(sumx) + command_out(sumy) + command_out(0.0) +"\n");
      mySerial.print(buffers);
      Serial.print(buffers) ;
      Serial.print(" <== command output\t");
      Serial.print(sumx) ;
      Serial.print(" <== sum x\t");
      Serial.print(sumy) ;
      Serial.print(" <== sum y\t");
      Serial.print(M) ;
      Serial.print(" <== Magnitude\t");
      Serial.print(D) ;
      Serial.println(" <== degree Direction");
      data = "";
    }
  }
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
    sumx = L1 + (L2 * cos(angle1)) - (L4 * cos(angle2)) - L5 - (L6 * cos(angle3) + (L8 * cos(angle4))) ;
    sumy = (-L3) - (L2 * sin(angle1)) - (L4 * sin(angle2)) + L7 + (L6 * sin(angle3) + (L8 * sin(angle4))) ;
    result = sqrt( pow(sumx, 2) + pow(sumy, 2) ) ;
    return result ;
  }
}

//sumx = L1 + (L2 * sin(angle1)) - (L4 * sin(angle2)) - L5 - (L6 * sin(angle3) + (L8 * sin(angle4))) ;
//sumy = (-L3) - (L2 * cos(angle1)) - (L4 * cos(angle2)) + L7 + (L6 * cos(angle3) + (L8 * cos(angle4))) ;

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

  } else if ( X==0 && Y == 0) {
    Dir = 0.00 ;
    return Dir ;
  }
  else {
    Dir = atan2(Y, X) * (180 / pi) ;
    return Dir ;
  }
}


String command_out(float input){
  String buffers;
  if (input < 0){
    buffers+="-";
    input=input*(-1);
  }
  else{
    buffers+="+";
  }

  buffers += String(((int)input/100)%10);
  buffers += String(((int)input/10)%10);
  buffers += String(((int)input)%10);
  return buffers;
}
