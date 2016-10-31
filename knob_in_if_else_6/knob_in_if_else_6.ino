
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
  
  delay(5);        // delay in between reads for stability
  
  if(sensorValue >= 555){
    Serial.print(" FIRST STATE ");
  }
  else if(sensorValue >= 444 && sensorValue < 555){
    Serial.print("  SECOND STATE");
  }
  else if(sensorValue >= 333 && sensorValue < 444){
    Serial.print("   THIRD STATE ");
  }
  else if(sensorValue >= 222 && sensorValue < 333){
    Serial.print("    FOURTH STATE ");
  }
  else if(sensorValue >= 111 && sensorValue < 222){
    Serial.print("     FIFTH STATE ");
  }
  else{
    Serial.print("     SIXTH STATE ");
  }
}
