void setup() {
  // MAX 15 KO
  // MIN 
  
  const int analogInPin = A0;
  int sensorValue = 0;

//  char RED = 2;
//  char GREEN = 3;
//  char BLUE = 4;
  
  // put your setup code here, to run once:
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);

  pinMode(A0, INPUT);
}

void loop() {
  // RED
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  delay(1000);

  //GREEN
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  delay(1000);

  //BLUE
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  delay(1000);

  //OFF
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  delay(1000);

  //RED & GREEN = ORANGE
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  delay(1000);

  // RED & BLUE = PURPLE
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  delay(1000);

  // GREEN & BLUE = YELLOW
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  delay(1000);

  // R + G + B = WHITE
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  delay(1000);

  // OFF
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  delay(1000);
}
