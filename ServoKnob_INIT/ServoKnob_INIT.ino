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

if(sensorValue >= 900){
  myservo.write(180);
}
else if(sensorValue >= 600 && sensorValue < 900){
  myservo.write(150);
}
else if(sensorValue >= 300 && sensorValue < 600){
  myservo.write(120);
}
else if(sensorValue >= 50 && sensorValue < 300){
  myservo.write(90);
}
else{
  myservo.write(60);
}

//  myservo.write(val);                  // sets the servo position according to the scaled value
//  delay(15);                           // waits for the servo to get there
}

