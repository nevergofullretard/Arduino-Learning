void setup() {
  // put your setup code here, to run once:
pinMode(8, OUTPUT);
pinMode(9, OUTPUT);
pinMode(10, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

int counter = 0;
int limit = 5;
while (counter < limit) {
  digitalWrite(8, HIGH);
  delay(500);
  digitalWrite(8, LOW);
  delay(500);
  counter++;  
  };

 limit += 10;
while (counter < limit) {
  digitalWrite(9, HIGH);
  delay(100);
  digitalWrite(9, LOW);
  delay(100);
  counter++;  
  };
limit += 15;
 while (counter < limit) {
  digitalWrite(10, HIGH);
  delay(100);
  digitalWrite(10, LOW);
  delay(100);
  counter++;  
  };
  

}
