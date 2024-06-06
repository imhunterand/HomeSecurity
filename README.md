# Arduino HomeSecurity
Keamanan rumah merupakan aspek yang sangat penting bagi setiap individu. Dalam era teknologi yang semakin maju, penggunaan sistem keamanan berbasis elektronik menjadi salah satu solusi yang efektif untuk melindungi rumah dari ancaman pencurian. Proyek ini bertujuan untuk merancang dan mengimplementasikan sistem deteksi panas tubuh dan anti maling menggunakan Arduino UNO. Sistem ini menggunakan sensor PIR untuk mendeteksi keberadaan manusia berdasarkan panas tubuh yang dipancarkan, dan memberikan peringatan melalui LED dan buzzer. Proyek ini juga akan mencakup beberapa fitur tambahan untuk meningkatkan fungsionalitas dan keandalannya.

![hayongapain](https://user-images.githubusercontent.com/109766416/184430571-61240e51-37bb-4f8e-b3a0-562279793175.gif)


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

**Instalasi Arduino IDE** : `Install Arduino IDE dan pastikan Anda sudah menginstal driver untuk Arduino UNO.`
## Panduan Installasi
<details>
<summary>Panduan I (Drop Down)</summary>
  
### [1] : Menyusun Rangkaian:
  * Hubungkan semua komponen sesuai dengan skema rangkaian di atas.
  
### [2] : Menyiapkan Arduino IDE: 
  * Buka Arduino IDE dan buat beberapa file baru sesuai dengan kode di atas.
  * Pastikan semua file (`main.ino`, `sensor.h`, `sensor.cpp`, `alarm.h`, `alarm.cpp`, `rtc.h`, `rtc.cpp`, `gsm.h`, `gsm.cpp`) berada dalam satu folder proyek yang sama.
  
### [3] : Mengunggah Kode:
   * Hubungkan Arduino UNO ke komputer menggunakan kabel USB.
   * Pilih port yang sesuai di Arduino IDE.
   * Unggah kode ke Arduino UNO dengan mengklik tombol `Upload`.
  
### [4] : Mengamati Hasil:
   * Setelah kode diunggah, periksa apakah sensor PIR mendeteksi gerakan.
   * Jika ada gerakan yang terdeteksi, LED akan menyala, buzzer akan berbunyi, data deteksi akan dicatat, dan pesan SMS akan dikirim.

  </details>


<details>
<summary>Feature Tambahan (Drop Down)</summary>
  
### [1] : Perekaman Data Deteksi:
  * Dengan menggunakan modul RTC, setiap kejadian deteksi akan dicatat dengan waktu yang tepat.
  
### [2] : Pengiriman Peringatan SMS:
  * Dengan menggunakan modul GSM, sistem akan mengirimkan pesan SMS ke nomor telepon yang telah ditentukan saat ada deteksi penyusup.

### [3] : Kustomisasi Alarm:
   * Sistem dapat dikustomisasi dengan menambahkan lebih banyak LED atau buzzer untuk indikasi yang lebih jelas.
   * Buzzer dapat dikonfigurasi untuk berbunyi dengan pola tertentu (misalnya, berbunyi secara berulang dengan interval tertentu).

  
### [4] : Integrasi dengan Sistem Lain:
   * Sistem dapat diintegrasikan dengan perangkat IoT lainnya seperti kamera pengawas untuk memberikan keamanan yang lebih komprehensif.
   * Menambahkan kontrol jarak jauh melalui aplikasi mobile untuk mengaktifkan atau menonaktifkan sistem.
   * Pemantauan Real-Time Data deteksi dapat diunggah ke server untuk pemantauan real-time melalui aplikasi web atau mobile.
  </details>

  ### Author

- [@Imhunterand](https://www.github.com/imhunterand)
- [@PWN0SEC](https://www.github.com/pwn0sec)
