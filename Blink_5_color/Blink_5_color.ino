const int pinBlue = 5;
const int pinRed = 6;
const int pinWhite = 3;
const int pinGreen = 10;
const int pinYelow = 11;

const int myDelay = 100;

void setup() {
  pinMode(pinBlue, OUTPUT);
  pinMode(pinRed, OUTPUT);
  pinMode(pinWhite, OUTPUT);
  pinMode(pinGreen, OUTPUT);
  pinMode(pinYelow, OUTPUT);
}

void loop() {
  digitalWrite(pinBlue, HIGH);   
  delay(myDelay);                       
  digitalWrite(pinBlue, LOW);    

  digitalWrite(pinRed, HIGH);
  delay(myDelay);      
  digitalWrite(pinRed, LOW);

  digitalWrite(pinWhite, HIGH);
  delay(myDelay);      
  digitalWrite(pinWhite, LOW);

  digitalWrite(pinGreen, HIGH);
  delay(myDelay);      
  digitalWrite(pinGreen, LOW);

  digitalWrite(pinYelow, HIGH);
  delay(myDelay);      
  digitalWrite(pinYelow, LOW);
}
