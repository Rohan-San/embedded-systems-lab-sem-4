void setup() {
    pinMode(13, OUTPUT);
    pinMode(12, OUTPUT);
    pinMode(7, OUTPUT);
}

void loop() {
    // First LED blinks one time
    digitalWrite(13, HIGH);
    delay(1000);
    digitalWrite(13, LOW);
    delay(1000);
    // Second LED blinks twice
    digitalWrite(12, HIGH);
    delay(1000);
    digitalWrite(12, LOW);
    delay(1000);
    digitalWrite(7, HIGH);
    delay(1000);
    digitalWrite(7, LOW);
    delay(1000);
}
