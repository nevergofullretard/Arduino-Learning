int readPin = A0;
int afterResPin = A1;
int afterBlueLedPin = A2;

int aOut = 8;

int readVal;

int delayTime = 5000;
int res = 330;
float amp;

float vol; // = voltage
float afterResVal; // value after Resistor
float afterBlueLedVal;

int makeVol(int vol) {
  int result;

  result = vol;
  return result;
  }

void setup() {
  // put your setup code here, to run once:
  pinMode(readPin, INPUT);
  pinMode(aOut, OUTPUT);
  pinMode(afterResPin, INPUT);
  pinMode(afterBlueLedPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(aOut, HIGH);
  // put your main code here, to run repeatedly:

  afterResVal = (5. /1023.) * analogRead(afterResPin);
  
  afterBlueLedVal = (afterResVal/1023.) * analogRead(afterBlueLedPin);
  
  readVal = analogRead(readPin);
  vol = (afterResVal/1023.)*readVal; // 5. = 5.0 , weil wir hier floating point operation brauchen!

  Serial.print("Volt nach Widerstand verfügbar: ");
  Serial.println(afterResVal);

  
  Serial.print("Volt für blaue LED: ");
  Serial.println(afterBlueLedVal);

  Serial.print("Volt für gelbe LED: ");
  Serial.println(vol);
  
  //Serial.print("Volt, die über dem Vorwiderstand abfallen: ");
  //Serial.println(AfterResVal - vol);
  amp = 5. / res;
  Serial.print("Stromstärke: ");
  Serial.print(amp);
  Serial.println(" A");
  Serial.println("");
  delay(delayTime);
  //analogWrite(aOut, 50); // von max. 255
  //delay(delayTime);
}
