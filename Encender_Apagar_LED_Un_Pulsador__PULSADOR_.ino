int led = 9;
int pulsador = 8;
int almacen;

void setup() {

  pinMode(led, OUTPUT);
  pinMode(pulsador, INPUT);
}

void loop() {

  almacen = digitalRead(pulsador);

  if (almacen == 1) {
    digitalWrite(led, 1);
  }

  else {
    digitalWrite(led, 0);
  }
}
