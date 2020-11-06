#include <Servo.h>

int servoPin = 9;
int servoPos = 10; // position
int dt = 1000;
Servo myServo;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  myServo.attach(servoPin);
}

void loop() {
  // put your main code here, to run repeatedly:
  //for (servoPos=0; servoPos < 150; servoPos++) {
    myServo.write(servoPos);
    delay(dt);
    //}

}
