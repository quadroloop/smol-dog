
#include <Servo.h>

Servo s1;
Servo s2;
Servo s3;
Servo s4;
Servo s5;
Servo s6;
Servo s7;
Servo s8;


void setup() {
  s1.attach(2);
  s2.attach(3);
  s3.attach(4);
  s4.attach(5);
  s5.attach(6);
  s6.attach(7);
  s7.attach(8);
  s8.attach(9);


  // initialize serial interface
  Serial.begin(9600);
}


String getValue(String data, char separator, int index)
{
    int found = 0;
    int strIndex[] = { 0, -1 };
    int maxIndex = data.length() - 1;

    for (int i = 0; i <= maxIndex && found <= index; i++) {
        if (data.charAt(i) == separator || i == maxIndex) {
            found++;
            strIndex[0] = strIndex[1] + 1;
            strIndex[1] = (i == maxIndex) ? i+1 : i;
        }
    }
    return found > index ? data.substring(strIndex[0], strIndex[1]) : "";
}


void loop() {



if (Serial.available() > 0){
  String jx = Serial.readString();

  String servoID = jx.substring(0,2);
  String servoAngleValue = jx.substring(3);
  int servoAngle = servoAngleValue.toInt();

Serial.println(servoID);
    Serial.println(servoAngle);

   if(servoID == "s1"){
    s1.write(servoAngle);
   }
    if(servoID == "s2"){
    s2.write(servoAngle);
   }
    if(servoID == "s3"){
    s3.write(servoAngle);
   }
    if(servoID == "s4"){
    s4.write(servoAngle);
   }
    if(servoID == "s5"){
    s5.write(servoAngle);
   }
    if(servoID == "s6"){
    s6.write(servoAngle);
   }
    if(servoID == "s7"){
    s7.write(servoAngle);
   }
    if(servoID == "s8"){
    s8.write(servoAngle);
   }

 }


}