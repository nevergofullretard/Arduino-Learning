/* Arduino Tutorial  25: Photoresitors | Paul McWhorter */

int lightPin = A0;
int lightVal;
int delayTime = 100;

int greenPin = 8; // green led for day
int yellowPin = 9; // yellow led for night

void setup() {
  // put your setup code here, to run once:
  pinMode(lightPin, INPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  lightVal = analogRead(lightPin);
  Serial.println(lightVal);
  //delay(delayTime);
  
  if (lightVal < 100) {
    digitalWrite(greenPin, HIGH);
    digitalWrite(yellowPin, LOW);
    } else {
      digitalWrite(yellowPin, HIGH);
      digitalWrite(greenPin, LOW);
      }
}
