#include <Servo.h>
Servo servoX;
Servo servoY;
int dia=20,pos=0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  servoX.attach(7);
  servoY.attach(8);
  servoX.write(0);
  servoY.write(0);
}

void loop() {
  // put your main code here, to run repeatedly:
  while(dia>=10)
  {
    servoX.write(90);
    delay(500);
    servoX.write(0);
    delay(500);
    servoY.write(pos);
    delay(500);
    pos=pos+10;
    dia=dia--;
  }
}
