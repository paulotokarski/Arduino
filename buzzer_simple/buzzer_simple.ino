#define BUZ 9

void setup() {
  pinMode(BUZ, OUTPUT);
}

void loop() {

  int som = 100;

  for(som = 100; som <= 2000; som+=100) {
    buzTone(som);
    buzNoTone();

    if(som >= 2000) {
      for(som = 2000; som >= 100; som-=100) {
        buzTone(som);
        buzNoTone();
      } 
    }

  }
}

void buzTone(int som) {
  tone(BUZ, som);
  delay(50);
}

void buzNoTone() {
  noTone(BUZ);
  delay(25);
}
