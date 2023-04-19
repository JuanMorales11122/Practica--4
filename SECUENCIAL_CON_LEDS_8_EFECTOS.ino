#define PUL A3

#define FOQUITO 4
int lectura;
boolean ACTIVADO=0;

void setup() {

pinMode (PUL, INPUT);
Serial.begin(9600);
pinMode (FOQUITO, OUTPUT);

}

void loop() {

lectura = analogRead(FOQUITO);

Serial.println(lectura);
delay(100);
if (lectura < 280){
  digitalWrite(FOQUITO,HIGH);
  }
if(lectura > 281){
  digitalWrite(FOQUITO,LOW);
  }

}