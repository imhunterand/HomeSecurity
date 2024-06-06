# Arduino HomeSecurity
Keamanan rumah merupakan aspek yang sangat penting bagi setiap individu. Dalam era teknologi yang semakin maju, penggunaan sistem keamanan berbasis elektronik menjadi salah satu solusi yang efektif untuk melindungi rumah dari ancaman pencurian. Proyek ini bertujuan untuk merancang dan mengimplementasikan sistem deteksi panas tubuh dan anti maling menggunakan Arduino UNO. Sistem ini menggunakan sensor PIR untuk mendeteksi keberadaan manusia berdasarkan panas tubuh yang dipancarkan, dan memberikan peringatan melalui LED dan buzzer. Proyek ini juga akan mencakup beberapa fitur tambahan untuk meningkatkan fungsionalitas dan keandalannya.

## Requirements:
  * Arduino UNO
  * Sensor PIR (Passive Infrared Sensor)
  * Buzzer
  * LED (merah)
  * Resistor (220 ohm)
  * Modul RTC (Real-Time Clock)
  * Modul GSM (untuk SMS)
  * Breadboard dan kabel jumper


## Schematic of the circuit:
  * **Sensor PIR:**
    * VCC dihubungkan ke 5V Arduino
    * GND dihubungkan ke GND Arduino
    * OUT dihubungkan ke pin digital D2 Arduino

  * **LED:**
    * Anoda (kaki panjang) dihubungkan ke pin digital D3 Arduino melalui resistor 220 ohm
    * Katoda (kaki pendek) dihubungkan ke GND Arduino

  * **Buzzer:**
    * Positif dihubungkan ke pin digital D4 Arduino
    * Negatif dihubungkan ke GND Arduino

  * **Modul RTC:**
    * VCC dihubungkan ke 5V Arduino
    * GND dihubungkan ke GND Arduino
    * SDA dihubungkan ke pin A4 Arduino
    * SCL dihubungkan ke pin A5 Arduino

  * **Modul GSM:**
    * VCC dihubungkan ke 5V Arduino
    * GND dihubungkan ke GND Arduino
    * TX dihubungkan ke pin RX Arduino
    * RX dihubungkan ke pin TX Arduino

**Instalasi Arduino IDE**
Install Arduino IDE dan pastikan Anda sudah menginstal driver untuk Arduino UNO.
