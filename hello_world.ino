void setup() {
  Serial.begin(9600);
  Serial.println("System Rozwoju AI Aktywowany!");
}

void loop() {
  static int sekundy = 0;
  Serial.print("Czas spedzony na nauce: ");
  Serial.print(sekundy);
  Serial.println(" sekund.");
  sekundy++;
  delay(1000);
}
