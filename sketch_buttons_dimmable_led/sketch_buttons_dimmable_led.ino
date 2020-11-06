int ledPin = 11;
int button1 = 9;
int button2 = 10;

int brightness = 0;

int downPin = A1;
int upPin = A0;

int downVal;
int upVal;

int delayTime = 100;

int buzzPin = 12; // buzz pin ist das Ton-Teil, wird verwendet wenn wir auf max oder min Helligkeit sind
int buzzTime = 100;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  
  pinMode(button1, OUTPUT);
  pinMode(button2, OUTPUT);
  pinMode(buzzPin, OUTPUT);
  
  pinMode(downPin, INPUT);
  pinMode(upPin, INPUT);
  
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(button1, HIGH);
  digitalWrite(button2, HIGH);
  
  downVal = digitalRead(downPin);
  upVal = digitalRead(upPin);
  
  Serial.println(upVal);
  Serial.println(downVal);
  
  if (upVal == 0) {
    if (brightness <= 240) { // digitalWrite geht nur bis 255
      brightness += 10;
      } else {
        digitalWrite(buzzPin, HIGH);
        delay(buzzTime);
        digitalWrite(buzzPin, LOW);
        }
    
    }
  if (downVal == 0) {
    if (brightness >= 10) {
      brightness -= 10;
      } else {
        digitalWrite(buzzPin, HIGH);
        delay(buzzTime);
        digitalWrite(buzzPin, LOW);
        }
    }
   Serial.println(brightness);
   Serial.println();
  analogWrite(ledPin, brightness);

  delay(delayTime);
}
