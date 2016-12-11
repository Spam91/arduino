
const int pinBlue = 5;
const int pinRed = 6;
const int pinWhite = 3;
const int pinGreen = 10;
const int pinYelow = 11;
const int button = 2;

const int myDelay = 50;
boolean lastButton = LOW;
boolean currentButton = LOW;

int pins[] = {0, pinBlue, pinRed, pinWhite, pinGreen, pinYelow};
int temp = 0;

void setup() {
  pinMode(pinBlue, OUTPUT);
  pinMode(pinRed, OUTPUT);
  pinMode(pinWhite, OUTPUT);
  pinMode(pinGreen, OUTPUT);
  pinMode(pinYelow, OUTPUT);  
  pinMode(button, INPUT);
}

boolean debounce(boolean last) {
  boolean current = digitalRead(button);
  if (last != current) {
    delay(5);
    current = digitalRead(button);
    return current;
    }
  } 

void loop() {  
  currentButton = debounce(lastButton);

  if (lastButton == LOW && currentButton == HIGH) {
    digitalWrite(pins[temp], LOW);
    if (temp == 5) {
      temp = 0;
      }
    temp = temp + 1;
    digitalWrite(pins[temp], HIGH);    
    }
  lastButton = currentButton;
}
