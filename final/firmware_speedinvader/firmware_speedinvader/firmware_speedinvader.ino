#include "SSD1306_minimal.h"
#include <avr/pgmspace.h>

#define HALL_SENSOR_PIN     4
#define DEBOUNCE_INTERVAL  20   // ms
#define UMFANG 0.187 // m

volatile byte half_revolutions;
unsigned int rpm;
float kmh;
float mph;
float max_kmh;

unsigned long timeold;
bool last_reading;  // the old state of the hall sensor input
unsigned long last_interrupt_at;  // the time of the last LOW to HIGH

SSD1306_Mini oled;

void setup()
{
  pinMode(HALL_SENSOR_PIN, INPUT);
  //digitalWrite(4, HIGH);
  //attachInterrupt(EXTERNAL_INTERRUPT_4, rpm_fun, FALLING);
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);

  oled.init(0x3c);
  oled.clear();
  
  half_revolutions = 0;
  rpm = 0;
  kmh = 0;
  mph = 0;
  max_kmh = 0;
  timeold = 0;
  last_reading = 1;
}

void loop()
{
  bool reading = digitalRead(HALL_SENSOR_PIN);
  if (reading && !last_reading                              // Pin state changed from LOW to HIGH
      && millis() - last_interrupt_at > DEBOUNCE_INTERVAL)  // debounce
  {
    half_revolutions++;
    last_interrupt_at = millis();
    digitalWrite(0, HIGH);
    digitalWrite(1, HIGH);
    delay(20);
    digitalWrite(0, LOW);
    digitalWrite(1, LOW);
  }
  last_reading = reading;
  
  if (half_revolutions >= 5) { 
    //Update RPM every 20 counts, increase this for better RPM resolution,
    //decrease for faster update
    unsigned long now = millis();
    rpm = 60000/(now - timeold)*half_revolutions;
    kmh = ((rpm*UMFANG)/60)*3.6;
    mph = kmh*0.621371;
    if (kmh > max_kmh) {
      max_kmh = kmh;
    }
    
    timeold = now;
    half_revolutions = 0;
    
    // Calculate and display RPM
    char rpm_char[10];
    String rpm_string;
    rpm_string = String(rpm) + " RPM";
    rpm_string.toCharArray(rpm_char, 10);
    oled.cursorTo(0, 0);
    oled.printString(rpm_char);

    // Calculate and display km/h
    char kmh_char[10];
    String kmh_string;
    kmh_string = String(int(kmh)) + " km/h";
    kmh_string.toCharArray(kmh_char, 10);
    oled.cursorTo(0, 1);
    oled.printString(kmh_char);

    // Calculate and display mp/h
    char mph_char[10];
    String mph_string;
    mph_string = String(int(mph)) + " mp/h";
    mph_string.toCharArray(mph_char, 10);
    oled.cursorTo(0, 2);
    oled.printString(mph_char);

    // Calculate and display max km/h
    char max_kmh_char[10];
    String max_kmh_string;
    max_kmh_string = String(int(max_kmh)) + " km/h maxs";
    max_kmh_string.toCharArray(max_kmh_char, 10);
    oled.cursorTo(0, 3);
    oled.printString(max_kmh_char);
  }
}

