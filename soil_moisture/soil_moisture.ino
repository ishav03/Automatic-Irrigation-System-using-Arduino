const int sensorPin = A0;
const int relayPin = 2;

void setup() {
  Serial.begin(9600);
  pinMode(sensorPin, INPUT);
  pinMode(relayPin, OUTPUT);
}

void loop() {
  
  int sensorVal = analogRead(sensorPin);
  sensorVal = map(sensorVal, 0, 1023, 0, 100);
  sensorVal = 100 - sensorVal;
  Serial.println(sensorVal);
  
  if(sensorVal < 95)
  {
    digitalWrite(relayPin, HIGH);
    delay(1000);
    digitalWrite(relayPin, LOW);
  } 
  delay(10000);
}
