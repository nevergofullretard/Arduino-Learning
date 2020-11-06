int readPin = A0;
int buttonNew;
int ledPin = 8;
int delayTime = 100;
int buttonOld = 1;
int ledState = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(readPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonNew = digitalRead(readPin);
  Serial.println(buttonNew);
  Serial.println(buttonOld);
  Serial.println();
        
  delayMicroseconds(delayTime); // den Delay damit es nicht zwei mal den gleichen Wert liest oderso
  
  if  (buttonNew == 0 && buttonOld == 1) {
    if (ledState == 0) {
      digitalWrite(ledPin, HIGH);
      ledState = 1;
      } else {
        digitalWrite(ledPin, LOW);
        ledState = 0;
        }
    } 
    buttonOld = buttonNew;
}
