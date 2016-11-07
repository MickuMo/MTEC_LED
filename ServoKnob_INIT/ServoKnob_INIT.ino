/*
 Controlling a servo position using a potentiometer (variable resistor)
 by Michal Rinott <http://people.interaction-ivrea.it/m.rinott>

 modified on 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Knob
*/

#include <Servo.h>

Servo myservo;  // create servo object to control a servo

const int analogPin = A0;
int sensorValue = 0;

//int potpin = 0;  // analog pin used to connect the potentiometer
//int val;    // variable to read the value from the analog pin

void setup() {
  Serial.begin(9600);
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  sensorValue = analogRead(analogPin);
  Serial.print("sensor = ");
  Serial.println(sensorValue);

//  val = analogRead(potpin);            // reads the value of the potentiometer (value between 0 and 1023)
//  val = map(val, 0, 1023, 0, 180);     // scale it to use it with the servo (value between 0 and 180)

if(sensorValue > 967){
  myservo.write(180);
}
else if(sensorValue >= 911 && sensorValue < 967){
  myservo.write(170);
}
else if(sensorValue >= 855 && sensorValue < 911){
  myservo.write(160);
}
else if(sensorValue >= 799 && sensorValue < 855){
  myservo.write(150);
}
else if(sensorValue >= 743 && sensorValue < 799){
  myservo.write(140);
}
else if(sensorValue >= 687 && sensorValue < 743){
  myservo.write(130);
}
else if(sensorValue >= 631 && sensorValue < 687){
  myservo.write(120);
}
else if(sensorValue >= 575 && sensorValue < 631){
  myservo.write(110);
}
else if(sensorValue >= 519 && sensorValue < 575){
  myservo.write(100);
}
else if(sensorValue >= 463 && sensorValue < 519){
  myservo.write(90);
}
else if(sensorValue >= 407 && sensorValue < 463){
  myservo.write(80);
}
else if(sensorValue >= 351 && sensorValue < 407){
  myservo.write(70);
}
else if(sensorValue >= 295 && sensorValue < 351){
  myservo.write(60);
}
else if(sensorValue >= 239 && sensorValue < 295){
  myservo.write(50);
}
else if(sensorValue >= 183 && sensorValue < 239){
  myservo.write(40);
}
else if(sensorValue >= 127 && sensorValue < 183){
  myservo.write(30);
}
else if(sensorValue >= 71 && sensorValue < 127){
  myservo.write(20);
}
else if(sensorValue >= 15 && sensorValue < 71){
  myservo.write(10);
}
else{
  myservo.write(0);
}

//  myservo.write(val);                  // sets the servo position according to the scaled value
//  delay(15);                           // waits for the servo to get there
}

