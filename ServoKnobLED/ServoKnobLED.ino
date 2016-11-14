/*
 Controlling a servo position using a potentiometer (variable resistor)
 by Michal Rinott <http://people.interaction-ivrea.it/m.rinott>

 modified on 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Knob
*/

#include <Servo.h>

Servo myservo1;  // create servo object to control a servo
Servo myservo2;
Servo myservo3;

int pos = 0;
// INIT analog input
const int analogPin = A0;
int sensorValue = 0;

void setup() {
  Serial.begin(9600);
  myservo1.attach(9);  // attaches the servo on pin 9 to the servo object
  myservo2.attach(10);
  myservo3.attach(11);

  // LED initialized
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop() {
  sensorValue = analogRead(analogPin);
  Serial.print("sensor = ");
  Serial.println(sensorValue);

//  val = analogRead(potpin);            // reads the value of the potentiometer (value between 0 and 1023)
//  val = map(val, 0, 1023, 0, 180);     // scale it to use it with the servo (value between 0 and 180)
  
  if(sensorValue > 969){
    myservo1.write(180); // sets the servo position according to the scaled value
    myservo2.write(180);
    myservo3.write(180);
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    delay(5);
  }
  else if(sensorValue >= 915 && sensorValue < 969){
    myservo1.write(170);
    myservo2.write(170);
    myservo3.write(170);
    digitalWrite(2, LOW);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    delay(5);
  }
  else if(sensorValue >= 861 && sensorValue < 915){
    myservo1.write(160);
    myservo2.write(160);
    myservo3.write(160);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    delay(5);
  }
  else if(sensorValue >= 807 && sensorValue < 861){
    myservo1.write(150);
    myservo2.write(150);
    myservo3.write(150);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    delay(5);
  }
  else if(sensorValue >= 753 && sensorValue < 807){
    myservo1.write(140);
    myservo2.write(140);
    myservo3.write(140);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    delay(5);
  }
  else if(sensorValue >= 699 && sensorValue < 753){
    myservo1.write(130);
    myservo2.write(130);
    myservo3.write(130);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, HIGH);
    delay(5);
  }
  else if(sensorValue >= 645 && sensorValue < 699){
    myservo1.write(120);
    myservo2.write(120);
    myservo3.write(120);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    delay(5);
  }
  else if(sensorValue >= 591 && sensorValue < 645){
    myservo1.write(110);
    myservo2.write(110);
    myservo3.write(110);
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    delay(5);
  }
  else if(sensorValue >= 537 && sensorValue < 591){
    myservo1.write(100);
    myservo2.write(100);
    myservo3.write(100);
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    delay(5);
  }
  else if(sensorValue >= 483 && sensorValue < 537){
    myservo1.write(90);
    myservo2.write(90);
    myservo3.write(90);
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    delay(5);
  }
  else if(sensorValue >= 429 && sensorValue < 483){
    myservo1.write(80);
    myservo2.write(80);
    myservo3.write(80);
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    delay(5);
  }
  else if(sensorValue >= 375 && sensorValue < 429){
    myservo1.write(70);
    myservo2.write(70);
    myservo3.write(70);
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, LOW);
    delay(5);
  }
  else if(sensorValue >= 321 && sensorValue < 375){
    myservo1.write(60);
    myservo2.write(60);
    myservo3.write(60);
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    delay(5);
  }
  else if(sensorValue >= 267 && sensorValue < 321){
    myservo1.write(50);
    myservo2.write(50);
    myservo3.write(50);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    delay(5);
  }
  else if(sensorValue >= 213 && sensorValue < 267){
    myservo1.write(40);
    myservo2.write(40);
    myservo3.write(40);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    delay(5);
  }
  else if(sensorValue >= 159 && sensorValue < 213){
    myservo1.write(30);
    myservo2.write(30);
    myservo3.write(30);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    delay(5);
  }
  else if(sensorValue >= 105 && sensorValue < 159){
    myservo1.write(20);
    myservo2.write(20);
    myservo3.write(20);
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    delay(5);
  }
  else if(sensorValue >= 51 && sensorValue < 105){
    myservo1.write(10);
    myservo2.write(10);
    myservo3.write(10);
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    delay(5);
  }
  else{
    myservo1.write(0);
    myservo2.write(0);
    myservo3.write(0);
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    delay(5);
  }
}

