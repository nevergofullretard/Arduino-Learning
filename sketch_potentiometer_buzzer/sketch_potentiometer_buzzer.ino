int outPin = 8;
int toneVal; 
int readVal;
int inPin = A0;

void setup() {
  // put your setup code here, to run once:
  pinMode(outPin, OUTPUT);
  pinMode(inPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  readVal = analogRead(inPin);
  toneVal = (9940./1023.) * readVal + 60;  //formula from Arduino Tutorial 24 | Paul McWhorter

  digitalWrite(outPin, HIGH);
  delayMicroseconds(toneVal); // NEW! DELAY MICROSECONDS
  digitalWrite(outPin, LOW);
  delayMicroseconds(toneVal);
}
