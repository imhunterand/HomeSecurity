#include "sensor.h"
#include <Arduino.h>

void sensorSetup() {
  pinMode(pirPin, INPUT);
}

bool detectMotion() {
  return digitalRead(pirPin) == HIGH;
}
