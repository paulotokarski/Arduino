#define LED 10
#define LDR 5

int light = 0;

void setup() {
  pinMode(LDR, INPUT);
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  light = analogRead(5);

  if(light < 100)
    digitalWrite(LED, HIGH);
  else
    digitalWrite(LED, LOW);

  Serial.println(light);
}
