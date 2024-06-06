#include "sensor.h"
#include "alarm.h"
#include "rtc.h"
#include "gsm.h"

void setup() {
  Serial.begin(9600);
  sensorSetup();
  alarmSetup();
  rtcSetup();
  gsmSetup();
}

void loop() {
  if (detectMotion()) {
    triggerAlarm();
    logEvent();
    sendAlert();
  } else {
    resetAlarm();
  }
  delay(100);
}
