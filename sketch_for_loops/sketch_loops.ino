int yellowPin = 8;
int redPin = 9;
int delTime = 100;
void setup() {
  // put your setup code here, to run once:
  pinMode(yellowPin, OUTPUT);
  pinMode(redPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int a;
  // put your main code here, to run repeatedly:
  for (a = 0; a < 50; a++) {
    digitalWrite(redPin, LOW);
    digitalWrite(yellowPin, HIGH);
    delay(delTime);
    digitalWrite(yellowPin, LOW);
    digitalWrite(redPin, HIGH);
    delay(delTime);
    Serial.println(a);
    }
    Serial.println("next round!");
   
    
  
  
  
}
