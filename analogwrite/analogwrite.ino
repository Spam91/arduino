const int power = 13;
const int blinc = 12;

const int myDelay = 2000;

void setup() {
  pinMode(power, OUTPUT);
  pinMode(blinc, OUTPUT);
  digitalWrite(power, HIGH);
  
}

void loop() {  
  digitalWrite(blinc, HIGH);
  delay(myDelay);
  digitalWrite(blinc, LOW);
  delay(myDelay);
}
