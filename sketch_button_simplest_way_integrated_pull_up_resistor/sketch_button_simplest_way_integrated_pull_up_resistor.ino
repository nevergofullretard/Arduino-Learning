/* Arduino Tutorial 34: Simplest way to use a pushbutton switch */

int buttonPin = 2; // this is an input pin!
int buttonVal;
int dt = 500;

void setup() {
  // put your setup code here, to run once:
  pinMode(buttonPin, INPUT);
  digitalWrite(buttonPin, HIGH); // bringing 5V to an Input Pin makes it a Pull Up Situation!
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonVal = digitalRead(buttonPin);
  Serial.println(buttonVal);
  delay(dt);
}
