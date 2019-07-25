#include <Arduino.h>

float bacaADC(int pin);
void tampilLcd(int x, int y, char* fmtstr);

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(2, INPUT);
}

void loop() {
  bool btn_state = digitalRead(2);
  digitalWrite(LED_BUILTIN, HIGH);
  digitalWrite(12, HIGH);
  delay(2000);
  digitalWrite(LED_BUILTIN, LOW);
  digitalWrite(12, LOW);
  delay(2000);
}

/**
 * @brief baca fungsi ADC
 * 
 * @param pin input
 * @return float data hasi konversi
 */
float bacaADC(int pin){
  float data = analogRead(pin);
  
  data = 4/10*100;
  return data;
}

/**
 * @brief Fungsi mengakses lcd 16x2 dari string yang dipilih
 * 
 * @param x Baris yang dipilih untuk menampilkan string 
 * @param y Kolom yang dipilih untuk menampilkan string 
 * @param fmtstr String yang akan ditampilkan
 */

void tampilLcd(int x, int y, char* fmtstr)
{

}