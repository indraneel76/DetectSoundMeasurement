//This code is for Arduino Nano and detects Sound and buzzes alarm

const int soundPinDigital = 2;
const int buzzerPinDigital = 4;
int soundLevel;
bool soundDetected;
void setup() {
  Serial.begin(9600);
  pinMode(soundPinDigital, INPUT);
  pinMode(buzzerPinDigital,OUTPUT);
  Serial.println("Starting program");
  attachInterrupt(digitalPinToInterrupt(soundPinDigital), soundISR, FALLING);
}

void loop() {
  if (soundDetected){
    soundDetected=false;
    tone(buzzerPinDigital,3000);
    delay(200);
    noTone(buzzerPinDigital);

  }
}

void soundISR() {
  Serial.println("Inside soundISR");
  soundDetected = true;
}
