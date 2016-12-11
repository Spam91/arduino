const int pinBlue = 5;
const int pinRed = 6;
const int pinWhite = 3;
const int pinGreen = 10;
const int pinYelow = 11;

const int myDelay = 100;

int pins[] = {pinBlue, pinRed, pinWhite, pinGreen, pinYelow};
int temp = 0;

void setup() {
  pinMode(pinBlue, OUTPUT);
  pinMode(pinRed, OUTPUT);
  pinMode(pinWhite, OUTPUT);
  pinMode(pinGreen, OUTPUT);
  pinMode(pinYelow, OUTPUT);
}

void loop() {
  temp = random(0,5);
  digitalWrite(pins[temp], HIGH);
  delay(myDelay);
  digitalWrite(pins[temp], LOW);
}
