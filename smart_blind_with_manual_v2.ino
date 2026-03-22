#include <Servo.h>

Servo mojaRoleta;
const int sensorPin = A0;
const int buttonPin = 2;

bool trybManualny = false; // Zmienna pamiętająca stan
bool ostatniStanPrzycisku = HIGH; // Do wykrywania kliknięcia

void setup() {
  Serial.begin(9600);
  mojaRoleta.attach(9);
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  bool aktualnyStanPrzycisku = digitalRead(buttonPin);

  // Wykrywanie momentu naciśnięcia (zbocze opadające)
  if (aktualnyStanPrzycisku == LOW && ostatniStanPrzycisku == HIGH) {
    trybManualny = !trybManualny; // Zmień tryb na przeciwny
    delay(50); // Prosty debouncing (ochrona przed drganiem styków)
    
    if(trybManualny) {
      Serial.println(">>> TRYB: MANUALNY (ZAMKNIĘTE) <<<");
    } else {
      Serial.println(">>> TRYB: AUTOMATYCZNY <<<");
    }
  }
  ostatniStanPrzycisku = aktualnyStanPrzycisku;

  if (trybManualny) {
    // --- TRYB MANUALNY ---
    mojaRoleta.write(0); // Roleta zawsze zamknięta
  } 
  else {
    // --- TRYB AUTOMATYCZNY ---
    int lightLevel = analogRead(sensorPin);
    int stopienOtwarcia = map(lightLevel, 0, 1023, 0, 180);
    mojaRoleta.write(stopienOtwarcia);
    
    Serial.print("Auto Mode - Swiatlo: ");
    Serial.println(lightLevel);
  }

  delay(20); 
}
