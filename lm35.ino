#define sensorPin A0

void setup() {
    Serial.begin(9600);
}

void loop() {
    int read = analogRead(sensorPin);
    float voltage = read * (5.0 / 1024.0);
    float tempC = voltage * 100;
    Serial.print("Temperature: ");
    Serial.print(tempC);
    Serial.print("°C  |  ");
    float tempF = (tempC * 9.0 / 5.0) + 32.0;
    Serial.print(tempF);
    Serial.println("°F");
    delay(1000);
}
