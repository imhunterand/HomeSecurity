#include "gsm.h"
#include <SoftwareSerial.h>

SoftwareSerial gsmSerial(7, 8); // RX, TX

void gsmSetup() {
  gsmSerial.begin(9600);
  delay(1000);
  gsmSerial.print("AT+CMGF=1\r"); // Set SMS to text mode
  delay(1000);
}

void sendAlert() {
  gsmSerial.print("AT+CMGS=\"+628123456789\"\r"); // Replace with your phone number
  delay(1000);
  gsmSerial.print("Intrusion detected!"); // Message to send
  delay(1000);
  gsmSerial.write(26); // ASCII code of CTRL+Z to send the message
  delay(1000);
}
