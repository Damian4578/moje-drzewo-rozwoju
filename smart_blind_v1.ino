#include <Servo.h>

Servo mojaRoleta;  // Tworzymy obiekt serwo
const int sensorPin = A0;
int stopienOtwarcia = 0;

void setup() {
  Serial.begin(9600);
  mojaRoleta.attach(9); // Silnik podpięty do pinu 9
}

void loop() {
  int lightLevel = analogRead(sensorPin);
  
  // Mapujemy światło (0-1023) na kąt silnika (0-180 stopni)
  // Jeśli jest bardzo jasno, otwieramy roletę (180 stopni)
  stopienOtwarcia = map(lightLevel, 0, 1023, 0, 180);
  
  mojaRoleta.write(stopienOtwarcia); // Ruch silnika
  
  Serial.print("Swiatlo: ");
  Serial.print(lightLevel);
  Serial.print(" | Kat rolety: ");
  Serial.println(stopienOtwarcia);
  
  delay(100); // Małe opóźnienie dla płynności
}
