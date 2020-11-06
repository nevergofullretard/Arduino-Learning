/* Sketch for an ACTIVE BUZZER */

int outPin = 8;
int myNum;

void setup() {
  // put your setup code here, to run once:
  pinMode(outPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Which number do you want?");
  
  while (Serial.available() == 0) {
    }

  myNum = Serial.parseInt();
  if (myNum > 10) {
    digitalWrite(outPin, HIGH);
    } else {
    digitalWrite(outPin, LOW);
      }
}
