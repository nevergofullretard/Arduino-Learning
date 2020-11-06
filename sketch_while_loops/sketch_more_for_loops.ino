int redPin = 9;
int delayTime = 100;
int potPin = A0; // pot = potentiometer
int potVal;

void setup() {
  // put your setup code here, to run once:
  pinMode(redPin, OUTPUT);
  pinMode(potPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  potVal = analogRead(potPin);
  Serial.println(potVal);
  delay(delayTime);

  while (potVal > 1000) {
    digitalWrite(redPin, HIGH);
    
    potVal = analogRead(potPin); // reading the potVal over and over again to check if it is still > 1000
    Serial.println(potVal);
    delay(delayTime);
    }
    digitalWrite(redPin, LOW);
}
