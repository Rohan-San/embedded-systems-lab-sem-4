#define buzz 8
#define btn 7

void setup(){
    pinMode(buzz,OUTPUT);
    pinMode(btn,INPUT);
}

void loop(){
    if (digitalRead(btn) == HIGH){
        digitalWrite(buzz,HIGH);
    }
    else{
        digitalWrite(buzz,LOW);
    }
}
