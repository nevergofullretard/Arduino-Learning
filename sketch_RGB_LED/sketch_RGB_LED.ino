int redPin = 11;
int greenPin = 10;
int bluePin = 9;
String msg = "What color do you want?";
String myColor;

void setup() {
  // put your setup code here, to run once:
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg);
  while (Serial.available() == 0) {
    }

  myColor = Serial.readString();

  if (myColor == "red") {
    
    analogWrite(redPin, 255);
    analogWrite(greenPin, 100);
    analogWrite(bluePin, 100);
    } else if (myColor == "blue"){
    analogWrite(redPin, 255);
    analogWrite(greenPin, 50);
    analogWrite(bluePin, 50);
    } else if (myColor == "green"){
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, HIGH);
    digitalWrite(bluePin, LOW);
    }
  
}
