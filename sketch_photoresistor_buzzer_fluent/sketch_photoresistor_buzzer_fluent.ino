/* Arduino Tutorial 26: More Fun with Photoresitors | Paul McWhorter */

int lightPin = A0;
int lightVal;

int buzzPin = 8;
int buzzTime;


void setup() {
  // put your setup code here, to run once:
  pinMode(lightPin, INPUT);
  pinMode(buzzPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  lightVal = analogRead(lightPin);
  buzzTime = (9./ 550.) * lightVal - (9.*200./550.); // +1. evtl am Schluss noch dazu dass es keine 0 ms Delay gibt
  Serial.println(lightVal);
  
 
    digitalWrite(buzzPin, HIGH);
    delayMicroseconds(buzzTime); // NEW! DELAY MICROSECONDS
    digitalWrite(buzzPin, LOW);
    delayMicroseconds(buzzTime);
    
    
  
  
}
