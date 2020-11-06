int xPin = A0;
int yPin = A1;
int switchPin = 2;

int xVal;
int yVal;
int switchVal;

int dt = 500;

void setup() {
  // put your setup code here, to run once:
  pinMode(xPin, INPUT);
  pinMode(yPin, INPUT);
  pinMode(switchPin, INPUT);
  Serial.begin(9600);
  digitalWrite(switchPin, HIGH); // weil es ein PULL UP Resistor ist!
}

void loop() {
  // put your main code here, to run repeatedly:
  xVal = analogRead(xPin);
  yVal = analogRead(yPin);
  switchVal = digitalRead(switchPin);

  Serial.println(xVal);
  Serial.println(yVal);
  Serial.println(switchVal);
  Serial.println();

  delay(dt);
  
}
