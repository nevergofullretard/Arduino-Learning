int leds[5] = {8,10,11,12};
int readVal;
float volt;
int readPin = A0;

/* If you have your array in scope you can use sizeof to determine its size in bytes and use the division to calculate the number of elements:
int counter; */
int lengthLeds = sizeof(leds) / sizeof(leds[0]); 
int counter;


void setup() {
  for (counter = 0; counter < lengthLeds; counter++){
    pinMode(leds[counter], OUTPUT);
    pinMode(readPin, INPUT);
    Serial.begin(9600);
    };

}

void loop() {
  // put your main code here, to run repeatedly:
  int binary[lengthLeds] = {};
  int num;
  int poss = 1; // possibilities = Möglichkeiten
  
  for (counter = 0; counter < lengthLeds; counter++){
      poss = poss * 2;
    };
  
  for (num = 0; num < poss; num++){
    readVal = analogRead(readPin);
    volt = (5. / 1023.) * readVal;
    Serial.print("Marlies = ");
    Serial.print(volt);
    Serial.print("\n");
    delay(500);
    int solution = num;
    int backwards = lengthLeds - 1;
    
    for (counter = lengthLeds - 1; counter > -1; counter--){
          int remainder;
          remainder = solution % 2;
          binary[counter] = remainder;
          solution = solution / 2;
          };
          
    for (counter = 0; counter < lengthLeds ; counter++){
      int led = leds[counter];
      if (binary[counter]) {
        digitalWrite(led, HIGH);
        } else {
          digitalWrite(led, LOW);
          }
      };
      
    };
  
}
