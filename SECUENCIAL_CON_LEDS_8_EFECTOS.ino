#define L A3

#define LUZ 4
int lectura;
boolean ACTIVADO=0;

void setup() {

pinMode (L, INPUT);
Serial.begin(9600);
pinMode (LUZ, OUTPUT);

}

void loop() {

lectura = analogRead(LUZ);

Serial.println(lectura);
delay(100);
if (lectura < 280){
  digitalWrite(LUZ,HIGH);
  }
if(lectura > 281){
  digitalWrite(LUZ,LOW);
  }

}
