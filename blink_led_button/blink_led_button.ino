#define BTN 2
#define LED 13

int btnState;

void setup() {
  pinMode(BTN, INPUT);
  pinMode(LED, OUTPUT);

  Serial.begin(9600);
}

void loop() {

  Serial.println(btnState = digitalRead(BTN));

  if(btnState == HIGH)
    digitalWrite(LED, LOW);
  else
    digitalWrite(LED, HIGH);

  delay(100);
}
