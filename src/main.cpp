#include <Arduino.h>

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(2000);
  digitaWrite(LED_BUILTIN, LOW);
  delay(2000);
}
