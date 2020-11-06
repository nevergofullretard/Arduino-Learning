int redPin = 8;
int yelPin = 9;
int greenPin = 10;
String msg = "Welches LED möchtest du einschalten? (rot, gelb, grün)";
String red = "rot";
String yel = "gelb";
String green = "grün";
String myString;
int delayTime = 5000;

void setup() {
  // put your setup code here, to run once:
  pinMode(redPin, OUTPUT);
  pinMode(yelPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg);
  while (Serial.available() == 0) {
    }
  myString = Serial.readString();

  if (myString == red) {
    Serial.println("Rot einschalten...");
    digitalWrite(redPin, HIGH);
    digitalWrite(yelPin, LOW);
    digitalWrite(greenPin, LOW);
    
    } 
    else if (myString == yel) {
      Serial.println("Gelb einschalten...");
      digitalWrite(yelPin, HIGH);
      digitalWrite(redPin, LOW);
      digitalWrite(greenPin, LOW);
      } 
      else if (myString == green) {
       Serial.println("Grün einschalten...");
      digitalWrite(greenPin, HIGH);
      digitalWrite(yelPin, LOW);
      digitalWrite(redPin, LOW);
      
      } 
      else {
        Serial.println("Eingabe ungültig.");
        }

      
}
