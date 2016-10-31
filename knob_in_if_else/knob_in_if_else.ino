
const int analogInPin = A0;
int sensorValue = 0;

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

void loop() {
  // read the input on analog pin 0:
  sensorValue = analogRead(analogInPin);
  
  // print out the value you read:
  Serial.print("sensor = " );
  Serial.println(sensorValue);
  
  delay(2);        // delay in between reads for stability
  
  if(sensorValue >= 498){
    Serial.print("UPPER RANGE ");
  }
  else if(sensorValue >= 332 && sensorValue < 498){
    Serial.print("MIDDLE RANGE ");
  }
   else if(sensorValue >= 166 && sensorValue < 332){
    Serial.print("LOWER RANGE ");
  }
  else{
    Serial.print("OTHER RANGE ");
  }
}
