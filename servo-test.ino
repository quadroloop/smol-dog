
#include <Servo.h>

Servo s1;
Servo s2;
Servo s3;
Servo s4;
Servo s5;
Servo s6;
Servo s7;
Servo s8;

int pos = 0;

void setup() {
  s1.attach(2);
  s2.attach(3);
  s3.attach(4);
  s4.attach(5);
  s5.attach(6);
  s6.attach(7);
  s7.attach(8);
  s8.attach(9);
}

void loop() {
  for (pos = 0; pos <= 50; pos += 1) {
    // in steps of 1 degree
    s1.write(pos);
    s2.write(pos);
    s3.write(pos);
    s4.write(pos);
    s5.write(pos);
    s6.write(pos);
    s7.write(pos);
    s8.write(pos);
    delay(10);
  }
  for (pos = 50; pos >= 0; pos -= 1) {
     s1.write(pos);
    s2.write(pos);
    s3.write(pos);
    s4.write(pos);
    s5.write(pos);
    s6.write(pos);
    s7.write(pos);
    s8.write(pos);
    delay(10);
  }
}