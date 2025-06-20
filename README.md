# 🛡️ AI Surveillance Robot – Final Project Robotika A081 Kelompok 3

Nama    : Mikhail Shams Afzal Karim

NPM     : 22081010169

Proyek ini merupakan tugas akhir dari mata kuliah **Robotika A081** yang menggabungkan **Artificial Intelligence (AI)** untuk pendeteksian objek secara real-time dengan perangkat keras berbasis **Arduino**. Sistem ini dirancang untuk **robot Bela Negara University 5 (BNU5)** sebagai sistem **pengawasan otomatis (AI Surveillance)** menggunakan model deteksi **YOLOv8** yang dijalankan pada kamera laptop dan terhubung langsung dengan robot BNU5 melalui komunikasi serial.

---

## 📌 Tujuan Proyek

Membangun sistem robotik cerdas pada robot BNU5 yang mampu:

- 🔍 **Mendeteksi objek manusia** secara real-time menggunakan kamera dan model AI.
- 🤖 **Mengendalikan pergerakan robot** sesuai dengan logika pengawasan yang diprogram dalam Python dan dikomunikasikan ke Arduino.

---

## 👥 Anggota Kelompok

- Irsyad Fadhil Makarim
- Kalfin Syah Kilau Mayya
- Albi Akhsanul Hakim
- Mikhail Shams Afzal Karim
- Muhamad Vicky Oktafrian

---

## 🧠 Teknologi yang Digunakan

| Komponen              | Deskripsi                                                                 |
| ----------------------|---------------------------------------------------------------------------|
| `YOLOv8`              | Model deep learning untuk deteksi objek secara real-time.                 |
| `OpenCV`              | Digunakan untuk pengambilan dan pemrosesan citra/video dari kamera.       |
| `Python`              | Bahasa utama untuk scripting dan integrasi antara AI dan robot.           |
| `Arduino Uno`         | Mikrokontroler untuk mengendalikan motor/aktuator robot.                  |
| `Serial Communication`| Komunikasi dua arah antara Python dan Arduino melalui port serial.        |
| `ino`                 | Bahasa pemrograman untuk mikrokontroler (digunakan dalam file `.ino`).    |

---

## 🚀 Cara Menjalankan Proyek

1. **Clone repositori**:
    ```bash
    git clone https://github.com/AlbiAkhsanul/Laporan-Github-Robotika-Albi-Kelompok-3.git
    cd Laporan-Github-Robotika-Albi-Kelompok-3
    ```

2. **Hubungkan Mikrokontroler** robot BNU5 ke laptop.

3. **Compile dan Upload** file `BNU5.ino` ke Arduino Uno pada robot BNU5.

4. **Buka dan Jalankan** Jupyter Notebook `main.ipynb`.

5. Pastikan kamera laptop aktif dan sistem komunikasi serial berjalan.

6. Sistem akan mendeteksi manusia secara real-time dan mengirim sinyal kendali ke robot.

---

## 🔧 Dependensi

Pastikan semua dependensi Python berikut sudah di-install:

```bash
pip install ultralytics opencv-python pyserial

