#define led_pin 13

void setup() {
  // put your setup code here, to run once:
  // inititalize digital pin led_builtin as an output
  pinMode (led_pin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite (led_pin, HIGH);
  delay(1000);
  digitalWrite (led_pin, LOW);
  delay(1000);
}
