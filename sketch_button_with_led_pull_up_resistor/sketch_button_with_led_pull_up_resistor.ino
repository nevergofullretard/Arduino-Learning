int readPin = A0;
int readVal;
int ledPin = 8;
int delayTime = 250;

void setup() {
  // put your setup code here, to run once:
  pinMode(readPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  readVal = digitalRead(readPin);
  Serial.println(readVal);
  
  if  (readVal == 0) {
    digitalWrite(ledPin, HIGH);
    } else {
      digitalWrite(ledPin, LOW);
      }
  delay(delayTime);
}
