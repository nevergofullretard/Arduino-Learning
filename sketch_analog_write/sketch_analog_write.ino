int redPin = 3; // bc I used red LED

int dim = 5; // wie funktioniert das? PWM - Pulse Width Modulation (google it!)
int intermediate = 50;
int bright = 255; // ist das gleiche wie "HIGH"
int dark = 0; // ist das gleiche wie "LOW"

/* 0-255 (255=5V) (256 Möglichkeiten - 8 Bit!) 
z.B. 5 = 0.098...Volt - (weil 5/255 = 0.0196... * 5 = 0.098...) 
oder 2.5 Volt = 127(.5)
*/

void setup() {
  // put your setup code here, to run once:
  pinMode(redPin, OUTPUT); // IMPORTANT! analogWrite ist nur bei Ports möglich, die ein "~" davor haben, z.B. ~3 (Port 3)
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(redPin, dim); 
  delay(1000);
  analogWrite(redPin, intermediate); 
  delay(1000);
  analogWrite(redPin, bright); 
  delay(1000);
  //analogWrite(redPin, dark); 
  //delay(1000);
}
