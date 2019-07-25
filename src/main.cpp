#include <Arduino.h>

#define Buzzer_pin 7

int Sensor_depan;

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(2, INPUT);
  pinMode(Buzzer_pin, OUTPUT);
}

void loop()
{
  bool btn_state = digitalRead(2);
  digitalWrite(LED_BUILTIN, HIGH);
  digitalWrite(12, HIGH);
  delay(2000);
  digitalWrite(LED_BUILTIN, LOW);
  digitalWrite(12, LOW);
  delay(2000);

  if (Sensor_depan < 20)
  {
    digitalWrite(Buzzer_pin, HIGH);
    delay(100);
    digitalWrite(Buzzer_pin, LOW);
    delay(100);
  }
  else
    digitalWrite(Buzzer_pin, LOW);
}
