int outPin = 12;
int delayTime = 1; // different delayTimes so that we can play with them
int delayTime2 = 0; // 15 microseconds! (1 second are 1 000 000 microseconds)

void setup() {
  // put your setup code here, to run once:
  pinMode(outPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  
  digitalWrite(outPin, HIGH);
  delayMicroseconds(delayTime2); // NEW! DELAY MICROSECONDS
  digitalWrite(outPin, LOW);
  delayMicroseconds(delayTime2);
}
