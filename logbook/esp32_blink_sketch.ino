// pin LED yang akan digunakan
const int ledPin = 2;

void setup () {
    // Inisialisasi pin LED sebagai output
    pinMode (ledPin, OUTPUT) ;
    Serial.begin (115200) ;
}

void loop() {
    // Nyalakan LED
    digitalWrite (ledPin, HIGH) ;
    Serial.println ("LED ON");
    delay (500); // Tunda selama 500 milidetik (0.5 detik)

    // Matikan LED
    digitalWrite (ledPin, LOW);
    Serial.println ("LED OFF") ;
    delay (1000); // Tunda selama 1000 milidetik (1 detik)

    // variasi delay untuk efek berbeda
    digitalWrite (ledPin, HIGH);
    Serial.println ("LED ON - Cepat") ;
    delay (100) ; // Tunda sebentar
    digitalWrite (ledPin, LOW) ;
    Serial.println ("LED OFF - Cepat");
    delay (100) ; // Tunda sebentar

    digitalWrite(ledPin, HIGH);
    Serial.println ("LED ON - Sedang");
    delay (250) ; // Tunda sedang
    digitalWrite (ledPin, LOW) ;
    Serial.println ("LED OFF - Sedang");
    delay (250) ; // Tunda sedang
}