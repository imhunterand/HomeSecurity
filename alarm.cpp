#include "alarm.h"
#include <Arduino.h>

void alarmSetup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
}

void triggerAlarm() {
  digitalWrite(ledPin, HIGH);
  digitalWrite(buzzerPin, HIGH);
}

void resetAlarm() {
  digitalWrite(ledPin, LOW);
  digitalWrite(buzzerPin, LOW);
}
