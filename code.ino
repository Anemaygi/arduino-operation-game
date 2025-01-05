int touchPin = 4;
int buzzerPin = 8;

void setup() {
  pinMode(touchPin, INPUT); 
  pinMode(buzzerPin, OUTPUT); 

  // DEBUG
  Serial.begin(9600);
}

void loop() {
  int cValue = digitalRead(touchPin);
  if(cValue == 1){
    tone(buzzerPin,262,200);
  } 

  // DEBUG
  Serial.println(String(cValue));
  delay(300);
}
