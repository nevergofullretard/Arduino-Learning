#include <Servo.h>
int photoPinOut = 8; // 10k resistor after photoresistor!
int photoPinIn = A0;
int photoVal;
int formula;
int servoPin = 9;
int servoPos = 10; // position
int dt = 100;
Servo myServo;

void setup() {
  // put your setup code here, to run once:
  pinMode(photoPinOut, OUTPUT); 
  pinMode(photoPinIn, INPUT);
  Serial.begin(9600);
  myServo.attach(servoPin);
  digitalWrite(photoPinOut, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
    photoVal = analogRead(photoPinIn);
    Serial.println(photoVal);
    formula = (175./1023.) * photoVal;
    myServo.write(formula);
    delay(dt);
    

}
