int led = 13;

int krotki = 200;
int dlugi = 600;
int przerwa = 200;

void kropka() {
  digitalWrite(led, HIGH);
  delay(krotki);
  digitalWrite(led, LOW);
  delay(przerwa);
}

void kreska() {
  digitalWrite(led, HIGH);
  delay(dlugi);
  digitalWrite(led, LOW);
  delay(przerwa);
}

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  kropka();
  kropka();
  kropka();

  delay(400);

  kreska();
  kreska();
  kreska();

  delay(400);

  kropka();
  kropka();
  kropka();

  delay(2000);
}
