#include "rtc.h"
#include <Wire.h>
#include "RTClib.h"

RTC_DS1307 rtc;

void rtcSetup() {
  Wire.begin();
  rtc.begin();
  if (!rtc.isrunning()) {
    rtc.adjust(DateTime(F(__DATE__), F(__TIME__)));
  }
}

void logEvent() {
  DateTime now = rtc.now();
  Serial.print("Intrusion detected at: ");
  Serial.print(now.year(), DEC);
  Serial.print('/');
  Serial.print(now.month(), DEC);
  Serial.print('/');
  Serial.print(now.day(), DEC);
  Serial.print(" ");
  Serial.print(now.hour(), DEC);
  Serial.print(':');
  Serial.print(now.minute(), DEC);
  Serial.print(':');
  Serial.println(now.second(), DEC);
}
