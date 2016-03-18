#define LED 9

void setup() {
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(A0);
  analogWrite(LED, (sensorValue / 5.0));

  Serial.println(sensorValue);
}
