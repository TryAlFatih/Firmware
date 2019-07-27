
#include <Arduino.h>

#define Buzzer_pin 7
#define ECHO 2
#define TTRIG 3
int sensor_depan;
int srf_1;

float bacaADC(int pin);
void tampilLcd(int x, int y, char* fmtstr);
void maju(int x, int y ,int arah );

void setup() {
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

/**
 * @brief Fungsi mengarahkan robot ke depan
 * 
 * @param x koordinat 1 
 * @param y koordinat 2
 * @param arah menentukan kemiringan sudut maju
 */
void maju(int x, int y, int arah)
{


}