int readPin1 = A0;
int readPin2 = A1;
int readPin3 = A2;

int delayTime = 2000;
int res = 330; // resistor = 330 OHM
float dividend = 5./1023.;

float val1;
float val2;
float val3;
float  ampere;

void setup() {
  // put your setup code here, to run once:
  pinMode(readPin1, INPUT);
  pinMode(readPin2, INPUT);
  pinMode(readPin3, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  val1 = dividend * analogRead(readPin1);
  val2 = dividend * analogRead(readPin2);
  val3 = dividend * analogRead(readPin3);

  Serial.print("Volt bei Messung 1: ");
  Serial.println(val1);
  
  Serial.print("Volt bei Messung 2: ");
  Serial.println(val2);
  
  Serial.print("Volt bei Messung 3: ");
  Serial.println(val3);

  ampere = 5./res;
  Serial.print(ampere);
  Serial.println(" A \n");
  delay(delayTime);
  
}
