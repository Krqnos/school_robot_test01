#include <HCSR04.h>

HCSR04 hc(4, 3); //initialisation class HCSR04 (trig pin , echo pin)

void setup() {
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  
  digitalWrite(5, HIGH); //Velocidad máxima
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH); //Velocidad máxima

  Serial.begin(9600);
}

void loop() {
  int currentdistance = hc.dist();
  Serial.println(currentdistance);
  delay(200);
  
  if (currentdistance <= 25) {
    derechapara();
    izquierdapara();
    delay(500);
    derecharetrocede();
    izquierdaretrocede();
    delay(300);
    derechapara();
    izquierdapara();
    delay(500);
    izquierdaretrocede();
    delay(370);
    izquierdapara();
  } else {
    derechaavanza();
    izquierdaavanza(); 
       
  }
  
}
void derechaavanza() {
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
}
void derecharetrocede() {
  //digitalWrite(6, LOW);
  //digitalWrite(7, HIGH);

  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
}
void derechapara() {
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
}
void izquierdaavanza() {
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
}
void izquierdaretrocede() {
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
}
void izquierdapara() {
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
}
void alerta() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(200);
  digitalWrite(LED_BUILTIN, LOW);
  delay(200);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(200);
  digitalWrite(LED_BUILTIN, LOW);
  delay(200);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(200);
  digitalWrite(LED_BUILTIN, LOW);
  delay(200);
}
