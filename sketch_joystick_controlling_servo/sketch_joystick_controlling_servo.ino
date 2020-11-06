#include <Servo.h>
int xPin = A0;
int yPin = A1;
int switchPin = 2;
int servoPin = 10;

int xVal;
int yVal;
int switchVal;
int angle;

Servo myServo;
int dt = 100;

void setup() {
  // put your setup code here, to run once:
  pinMode(xPin, INPUT);
  pinMode(yPin, INPUT);
  pinMode(switchPin, INPUT);
  myServo.attach(servoPin);
  Serial.begin(9600);
  digitalWrite(switchPin, HIGH); // weil es ein PULL UP Resistor ist!
}

void loop() {
  // put your main code here, to run repeatedly:
  xVal = analogRead(xPin);
  yVal = analogRead(yPin);
  switchVal = digitalRead(switchPin);
  angle = (175./1023.) * xVal;
  myServo.write(angle);
  Serial.println(xVal);
  Serial.println(yVal);
  Serial.println(switchVal);
  Serial.println();
  
  delay(dt);
  
}
