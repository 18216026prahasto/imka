//TEST CODE 


#include <SoftwareSerial.h>

int trigPin = 2;
int echoPin = 4;
int buzzer = 7;
long duration, cm, inches;

void setup() {

  Serial.begin (9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzer,OUTPUT);
  delay(5000);
  Serial.println("Patrol Mode Initiated...");
}

void loop()
{
  digitalWrite(trigPin, LOW);
  delayMicroseconds(100);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(100);
  digitalWrite(trigPin, LOW);

  pinMode(echoPin, INPUT);
  duration = pulseIn(echoPin, HIGH);

  inches = (duration / 2) / 74;
  Serial.println(inches);
  delay(2500);

  if (inches > 10) {
    Serial.println("Intruder Detected!");
    Serial.println("Sending text Notification...");
    digitalWrite(buzzer,HIGH);  
  } else{
    
  }//end if statement
  /*
    Serial.println("Ga ada apa2");
  }*/
  Serial.println("Patrol Mode Initiated...");
  delay(2500);


}//ends loop
