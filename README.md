# 🚀 AI-Driven Tech Journey: Smart Home System

To jest moje "Drzewo Postępu" – projekt, w którym wykorzystuję **Sztuczną Inteligencję**, aby przeobrazić wolny czas w konkretne produkty technologiczne. Przeszedłem drogę od prostego mrugania diodą do stworzenia interaktywnego systemu automatyki domowej.

👉 **[ZOBACZ MÓJ DASHBOARD ONLINE](https://damian4578.github.io/moje-drzewo-rozwoju/)**

## 🛠 Cel Projektu
- Budowa produktów opartych na nowej technologii bez nakładów finansowych.
- Dokumentowanie nauki elektroniki i robotyki poprzez symulatory (**Wokwi**).
- Wykorzystanie AI jako głównego inżyniera i mentora.

## 📁 Zawartość Repozytorium (Ewolucja Kodu)
W poniższych plikach zapisałem każdy etap powstawania systemu:

* 🌱 **`hello_world.ino`** – Pierwszy test komunikacji z Arduino.
* 🆘 **`sos_signal.ino`** – Nauka sterowania sygnałami (Alfabet Morse'a).
* 💡 **`smart_light_v1.ino`** – Pierwsza automatyka z użyciem fotorezystora (LDR).
* ⚙️ **`smart_blind_v1.ino`** – Dodanie serwomechanizmu (ruchoma roleta).
* 🛡️ **`smart_blind_with_manual_v2.ino`** – **Wersja Finalna**. Pełny system z priorytetem bezpieczeństwa (przycisk).
* 🌐 **`index.html`** – Kod źródłowy panelu sterowania użytkownika.

## 📈 Statystyki Rozwoju & Roadmap
- [x] **Etap 1:** Konfiguracja Środowiska (GitHub + Symulator).
- [x] **Etap 2:** "Hello World" - Pierwszy kod wygenerowany z AI.
- [x] **Etap 3:** Alfabet Morse'a - Logika sygnałów SOS.
- [x] **Etap 4:** Inteligentne Oświetlenie - Obsługa fotorezystora (LDR).
- [x] **Etap 5:** Fizyczna Akcja - Implementacja serwomechanizmu (Roleta).
- [x] **Etap 6:** User Interface - Budowa Dashboardu w HTML/CSS.
- [x] **Etap 7:** Bezpieczeństwo - Obsługa przycisku (Manual Override).
- [x] **Etap 8:** Analityka - Dodanie wykresów zmian światła na Dashboardzie.

## 🏗 Architektura Systemu (Jak to działa?)
1. **Warstwa Percepcji:** Fotorezystor (LDR) mierzy natężenie światła otoczenia.
2. **Warstwa Decyzyjna:** Kod Arduino decyduje: jeśli przycisk jest wciśnięty -> zamknij (0°), jeśli nie -> dostosuj do światła.
3. **Warstwa Wykonawcza:** Serwomechanizm fizycznie ustawia kąt rolety (0-180°).
4. **Interfejs:** Interaktywny dashboard pozwalający symulować warunki pracy systemu.

## 🛠 Rozwiązywanie problemów (Troubleshooting)

### Problemy z przyciskiem (Pushbutton)
**Problem:** Symulacja nie reagowała na kliknięcia lub serwo było stale zablokowane.
**Przyczyna:** Niewłaściwe podłączenie pinów przycisku 4-nóżkowego (zwarcie "na wprost").
**Rozwiązanie:** Podłączenie przewodów **po przekątnej** (diagonalnie) oraz zastosowanie w kodzie trybu `INPUT_PULLUP`.

---
*Projekt rozwijany przy wsparciu AI Gemini.*
