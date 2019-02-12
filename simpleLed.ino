#include <Keypad.h>
const byte ROWS = 4;
const byte COLS = 3;
int red = 10;
int yellow = 11;
int green = 12;
int blue = 13;
char key[ROWS][COLS] = {
  {'1','2','3'},
  {'4','5','6'},
  {'7','8','9'},
  {'#','0','*'}
};
byte rowPins[ROWS] = {9,8,7,6};
byte colPins[COLS] = {5,4,3};

Keypad kpd= Keypad( makeKeymap(key), rowPins, colPins, ROWS, COLS );

void setup() {
  // put your setup code here, to run once:
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  char key = kpd.getKey();
  if (key) {
    switch (key) {
      case '1' : 
      digitalWrite(red,HIGH);
      digitalWrite(yellow, LOW);
      digitalWrite(green, LOW);
      digitalWrite(blue, LOW);
      break;
      case '2' : 
      digitalWrite(red,LOW);
      digitalWrite(yellow, HIGH);
      digitalWrite(green, LOW);
      digitalWrite(blue, LOW);
      break;
      case '3' : 
      digitalWrite(red,HIGH);
      digitalWrite(yellow, HIGH);
      digitalWrite(green, LOW);
      digitalWrite(blue, LOW);
      break;
      case '4' : 
      digitalWrite(red,LOW);
      digitalWrite(yellow, LOW);
      digitalWrite(green, HIGH);
      digitalWrite(blue, LOW);
      break;
      case '5' : 
      digitalWrite(red,HIGH);
      digitalWrite(yellow, LOW);
      digitalWrite(green, HIGH);
      digitalWrite(blue, LOW);
      break;
      case '6' : 
      digitalWrite(red,LOW);
      digitalWrite(yellow, HIGH);
      digitalWrite(green, HIGH);
      digitalWrite(blue, LOW);
      break;
      case '7' : 
      digitalWrite(red,HIGH);
      digitalWrite(yellow, HIGH);
      digitalWrite(green, HIGH);
      digitalWrite(blue, LOW);
      break;
      case '8' : 
      digitalWrite(red,LOW);
      digitalWrite(yellow, LOW);
      digitalWrite(green, LOW);
      digitalWrite(blue, HIGH);
      break;
      case '9' : 
      digitalWrite(red,HIGH);
      digitalWrite(yellow, LOW);
      digitalWrite(green, LOW);
      digitalWrite(blue, HIGH);
      break;
      case '0' : 
      digitalWrite(red,LOW);
      digitalWrite(yellow, LOW);
      digitalWrite(green, LOW);
      digitalWrite(blue, LOW);
      break;
      case '#' : 
      digitalWrite(blue,HIGH);
      delay(200);
      digitalWrite(blue, LOW);
      digitalWrite(green,HIGH);
      delay(200);
      digitalWrite(green, LOW);
      digitalWrite(yellow,HIGH);
      delay(200);
      digitalWrite(yellow, LOW);
      digitalWrite(red,HIGH);
      delay(200);
      digitalWrite(red, LOW);
      break;
      default :
      digitalWrite(red,HIGH);
      delay(200);
      digitalWrite(red, LOW);
      digitalWrite(yellow,HIGH);
      delay(200);
      digitalWrite(yellow, LOW);
      digitalWrite(green,HIGH);
      delay(200);
      digitalWrite(green, LOW);
      digitalWrite(blue,HIGH);
      delay(200);
      digitalWrite(blue, LOW);
    }
  }
}
