#define LED 9
#define pot AO

void setup(){
    pinMode(LED,OUTPUT);
}

void loop(){
    int potVal = analoghead(pot);
    int bright = potVal/4;
    analogWrite(LED,bright);
}
