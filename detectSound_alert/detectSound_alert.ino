//This code is for Arduino Nano and detects Sound and buzzes alarm

const int soundPinAnalog = A2 ;
int soundLevel = 0 ;
void setup() {
  Serial.begin(9600);
  pinMode(soundPinAnalog,INPUT);
  Serial.println("Starting program");
}

void loop() {
  
  soundLevel = analogRead(soundPinAnalog);
  Serial.println("value read "+soundLevel);
  
}
