void setup() {
  // put your setup code here, to run once:
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
}

void loop() {
  alerta();
  derechaavanza();
  delay(5000);
  derechapara();
  izquierdaavanza();
  delay(5000);
  izquierdapara();
  delay(5000);
  derecharetrocede();
  izquierdaretrocede();
  delay(5000);
  derechapara();
  izquierdapara();
  int a = 0;
  while (a < 5) {
    alerta();
    a++;
  }

}
void derechaavanza() {
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
}
void derecharetrocede() {
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
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
