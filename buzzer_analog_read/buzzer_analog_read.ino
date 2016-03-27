#define BUZ 13 

int som = 0;

void setup() {
  pinMode(BUZ, OUTPUT);
}

void loop() {
  som = analogRead(A0);
  tone(BUZ, som);
}
