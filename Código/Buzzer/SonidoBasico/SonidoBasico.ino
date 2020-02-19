int pinBuzz = 9;      //Buzzer conectado al pin 9
int tiempo;
int tono;

void setup() {
  pinMode(pinBuzz, OUTPUT);   //Al inicializar, emitiremos
  beep(50, 100);              //dos sonidos
  beep(50, 100);
  delay(1000);
}
void beep(unsigned int pausa, int tono) {
  analogWrite(pinBuzz, tono);
  delay(pausa);             // Espera
  analogWrite(pinBuzz, 0);  // Apaga
  delay(pausa);             // Espera
}
void loop() {
  tono = 125;           //Tono tiene que estar entre 0 y 255;
  tiempo = 500;         //Emitiremos un sonido
  beep(tiempo, tono);   //cada medio segundo
}

