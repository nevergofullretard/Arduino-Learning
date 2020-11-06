void setup() {
  // put your setup code here, to run ONCE (that means only one time):
pinMode(13, OUTPUT);
pinMode(9, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(13, HIGH);
digitalWrite(9, HIGH);

delay(500);

digitalWrite(9, LOW);
digitalWrite(13, LOW);

delay(1000);





}
