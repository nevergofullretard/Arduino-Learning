int readPin = A3;
int aOut = 11;
int readVal;
float vol; // = voltage
int delayTime = 500;

void setup() {
  // put your setup code here, to run once:
  pinMode(readPin, INPUT);
  pinMode(aOut, OUTPUT);
  Serial.begin(9600); // Serial Monitor, 9600 = Übertragungsgeschwindigkeit
}

void loop() {
  // put your main code here, to run repeatedly:
  readVal = analogRead(readPin);
  vol = (5./1023.)*readVal; // 5. = 5.0 , weil wir hier floating point operation brauchen!
  Serial.println(vol);
  delay(delayTime);
  analogWrite(aOut, 50);
  delay(delayTime);
  
}
