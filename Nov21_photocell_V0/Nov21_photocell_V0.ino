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

  if(sensorValue > 350 ){
    digitalWrite(R, LOW);
    digitalWrite(G, LOW);
    digitalWrite(B, LOW);
    delay(100);
  }
  else if(sensorValue > 250 ){
    digitalWrite(R, HIGH);
    digitalWrite(G, LOW);
    digitalWrite(B, LOW);
    delay(100);
  }
  else if(sensorValue > 150 ){
    digitalWrite(R, LOW);
    digitalWrite(G, HIGH);
    digitalWrite(B, LOW);
    delay(100);
  }
  else if(sensorValue > 75){
    digitalWrite(R, LOW);
    digitalWrite(G, LOW);
    digitalWrite(B, HIGH);
    delay(100);
  }
  else{
    digitalWrite(R, HIGH);
    digitalWrite(G, HIGH);
    digitalWrite(B, HIGH);
    delay(100);
  }

  
}

