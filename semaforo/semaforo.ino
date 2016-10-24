// Definicao das constantes correspondentes a cada porta
#define LED_VERDE 11
#define LED_AMARELO 12
#define LED_VERMELHO 13

void setup() {
  // inicia as portas digitais como sendo saída (OUTPUT)
  pinMode(LED_VERDE, OUTPUT);
  pinMode(LED_AMARELO, OUTPUT);
  pinMode(LED_VERMELHO, OUTPUT);
}

void loop() {
  digitalWrite(LED_VERDE, HIGH);    // LED verde aceso (HIGH)
  delay(3000);                      // esperar tres segundos
  
  digitalWrite(LED_VERDE, LOW);     // LED verde apagado (LOW)
  digitalWrite(LED_AMARELO, HIGH);  // LED amarelo aceso (HIGH)
  delay(1000);                      // esperar por um segundo
  
  digitalWrite(LED_AMARELO, LOW);   // LED amarelo apagado (LOW)
  digitalWrite(LED_VERMELHO, HIGH); // LED vermelho aceso (HIGH)
  delay(5000);                      // esperar por cinco segundos
}
