#include <Arduino.h>

float bacaADC(int pin);

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
