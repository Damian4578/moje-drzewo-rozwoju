const int sensorPin = A0;  // Miejsce podpięcia czujnika
const int ledPin = 13;     // Nasza dioda

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int lightLevel = analogRead(sensorPin); // Odczytujemy poziom światła
  Serial.print("Poziom swiatla: ");
  Serial.println(lightLevel);

  if (lightLevel < 500) {  // Jeśli jest ciemno...
    digitalWrite(ledPin, HIGH); // Włączamy światło
    Serial.println("--- CIEMNO: Swiatlo ON ---");
  } else {
    digitalWrite(ledPin, LOW);  // Wyłączamy światło
    Serial.println("--- JASNO: Swiatlo OFF ---");
  }
  delay(500);
}
