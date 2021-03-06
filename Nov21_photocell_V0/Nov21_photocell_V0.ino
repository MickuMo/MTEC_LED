const int analogPin = A0;
int sensorValue = 0;

  char R = 2;
  char G = 3;
  char B = 4;

void setup() {
  Serial.begin(9600);
  
  pinMode(A0, INPUT);
  
  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT);
  
}

void loop() {
  sensorValue = analogRead(analogPin);
  Serial.print("sensor = ");
  Serial.println(sensorValue);
  delay(100);

  if(sensorValue > 340 ){
    digitalWrite(R, LOW);
    digitalWrite(G, LOW);
    digitalWrite(B, LOW);
  }
  else if(sensorValue > 300 ){
    digitalWrite(R, HIGH);
    digitalWrite(G, LOW);
    digitalWrite(B, LOW);
  }
  else if(sensorValue > 260 ){
    digitalWrite(R, LOW);
    digitalWrite(G, HIGH);
    digitalWrite(B, LOW);
  }
  else if(sensorValue > 220){
    digitalWrite(R, LOW);
    digitalWrite(G, LOW);
    digitalWrite(B, HIGH);
  }
    else if(sensorValue > 180){
    digitalWrite(R, HIGH);
    digitalWrite(G, HIGH);
    digitalWrite(B, LOW);
  }
    else if(sensorValue > 140){
    digitalWrite(R, LOW);
    digitalWrite(G, HIGH);
    digitalWrite(B, HIGH);
  }
    else if(sensorValue > 80){
    digitalWrite(R, HIGH);
    digitalWrite(G, LOW);
    digitalWrite(B, HIGH);
  }
  else{
    digitalWrite(R, HIGH);
    digitalWrite(G, HIGH);
    digitalWrite(B, HIGH);
  }

  
}

