int myNumber;
String msg = "How many LED blinks do you want? ";
String ans = "Your blinks are: ";
int delayTime = 500;
int outputPin = 8;

/*
3 steps for input:
- ask
-wait
-read

Wenn man nach der Eingabe nicht direkt wieder 0 bekommen will, beim Serial Monitor auf "no line ending" - "kein Zeilenende" setzen
*/

void setup() {
  // put your setup code here, to run once:
  pinMode(outputPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg); // ASK
  
  while (Serial.available() == 0) { //WAITING - while there is no data on the serial port, DO NOTHING, to wait until they entered data
    //Serial.println("no input!");
    //delay(1000);
    }
    
 myNumber = Serial.parseInt(); // READ - parseInt, parseFloat, readString, ...
 Serial.print(ans);
 Serial.println(myNumber);
 
 for (myNumber; myNumber > 0; myNumber--) {
   digitalWrite(outputPin, HIGH);
   delay(delayTime);
   digitalWrite(outputPin, LOW);
   delay(delayTime);
  }
 
}
