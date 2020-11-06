int inputPin = A2;
int outputPin = 9;
int readVal;
float volt;
void setup() {
  // put your setup code here, to run once:
  pinMode(inputPin, INPUT);
  pinMode(outputPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  
  readVal = analogRead(inputPin);
  volt = (5. / 1023.) * readVal;
  
  
  //if ( volt < 1.8) {
    //Serial.print("lower: ");
    //analogWrite(outputPin, readVal); // weil mit analogWrite erhält man dieses Wellenverhalten, deshalb digtialWrite, aber nur zum Test
    //} else {
      //Serial.print("vorher: ");
    //Serial.print(volt);
    //Serial.print("\n");
      //analogWrite(outputPin, 0);
      //Serial.print("jetzt höher, daher auf null schalten! ");
      //}
  
  //Serial.print(volt);
  //Serial.print("\n");
  Serial.println(255. / 1023.);
  Serial.println(readVal);
  int outputVal = (255. / 1023.) * readVal;
  Serial.println(outputVal);
  analogWrite(outputPin, outputVal);
  //delay(1000);
}
