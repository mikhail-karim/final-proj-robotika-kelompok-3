int motor1Pin1 = 27;
int motor1Pin2 = 26;
int enable1Pin = 12;

// Setting PWM properties
const int freq = 30000;
const int pwmChannel = 0;
const int resolution = 8;
int dutyCycle = 200;

void setup () {
    // sets the pins as outputs:
    pinMode (motor1Pin1, OUTPUT) ;
    pinMode (motor1Pin2, OUTPUT);
    pinMode (enable1Pin, OUTPUT);

    // configure LED PWM functionalitites
    ledcSetup (pwmChannel, freq, resolution) ;

    // attach the channel to the GPIO to be controlled
    ledcAttachPin (enable1Pin, pwmChannel) ;

    Serial.begin(115200);

    // testing
    Serial.print ("Testing DC Motor ... ");
}

void loop() {
    // Move the DC motor forward at maximum speed
    Serial.println ("Moving Forward") ;
    digitalWrite(motor1Pin1, LOW) ;
    digitalWrite(motor1Pin2, HIGH);
    delay (2000) ;

    // stop the DC motor
    Serial.println("Motor stopped") ;
    digitalWrite(motor1Pin1, LOW);
    digitalWrite(motor1Pin2, LOW);
    delay (1000) ;

    // Move DC motor backwards at maximum speed
    Serial.println ("Moving Backwards");
    digitalWrite(motor1Pin1, HIGH);
    digitalWrite(motor1Pin2, LOW);
    delay (2000) ;

    // Stop the DC motor
    Serial.println("Motor stopped");
    digitalWrite(motor1Pin1, LOW);
    digitalWrite(motor1Pin2, LOW);
    delay (1000) ;

    // Move DC motor forward with increasing speed
    digitalWrite(motor1Pin1, HIGH);
    digitalWrite(motor1Pin2, LOW);

    while (dutyCycle <= 255) {
        ledcWrite (pwmChannel, dutyCycle) ;
        Serial.print ("Forward with duty cycle: ");
        Serial.println (dutyCycle);
        dutyCycle = dutyCycle + 5;
        delay (500) ;
    }

    dutyCycle = 200;
}