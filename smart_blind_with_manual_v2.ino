#include <Servo.h>

Servo mojaRoleta;
const int sensorPin = A0;
const int buttonPin = 2; // Pin przycisku

void setup() {
  Serial.begin(9600);
  mojaRoleta.attach(9);
  
  // Używamy INPUT_PULLUP, żeby nie musieć dawać zewnętrznego rezystora
  pinMode(buttonPin, INPUT_PULLUP); 
}

void loop() {
  // Sprawdzamy stan przycisku (LOW oznacza wciśnięty)
  int stanPrzycisku = digitalRead(buttonPin);
  
  if (stanPrzycisku == LOW) {
    // --- PRIORYTET: TRYB RĘCZNY ---
    mojaRoleta.write(0); // Zamykamy roletę na sztywno
    Serial.println("!!! TRYB NOCNY AKTYWNY (PRZYCISK) !!!");
  } 
  else {
    // --- TRYB AUTOMATYCZNY (Działa tylko, gdy przycisk jest puszczony) ---
    int lightLevel = analogRead(sensorPin);
    int stopienOtwarcia = map(lightLevel, 0, 1023, 0, 180);
    
    mojaRoleta.write(stopienOtwarcia);
    
    Serial.print("Auto Mode - Swiatlo: ");
    Serial.println(lightLevel);
  }

  delay(50); // Szybsza reakcja na przycisk
}
