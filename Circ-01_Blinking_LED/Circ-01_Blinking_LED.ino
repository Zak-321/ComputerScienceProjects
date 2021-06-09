//declare variables
int redPin = 13;
int greenPin = 9;
int redPin2 = 5;
int i = 225;

void setup() {
  // put your setup code here, to run once:
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(redPin2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(redPin, HIGH);
  delay(100);
  digitalWrite(redPin, LOW);
  delay(100);

  digitalWrite(redPin2, HIGH);
  delay(100);
  digitalWrite(redPin2, LOW);
  delay(100);

  for (i = 255; i >= 0; i -= 5) {
    analogWrite(greenPin, i);
    delay(100);
  }//end of for loop
}//end of void loop
