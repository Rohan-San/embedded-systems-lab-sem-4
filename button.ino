#define led_pin 13
#define button_pin 8

void setup() {
  // put your setup code here, to run once:
  // inititalize digital pin led_builtin as an output
  pinMode (led_pin, OUTPUT);
  pinMode (button_pin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(button_pin) == HIGH) {
    digitalWrite(led_pin, HIGH);
  }
  else {
    digitalWrite(led_pin, LOW);
  }
}
