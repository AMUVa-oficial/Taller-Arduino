#define trig 12
#define echo 11
long int duracion;
long int distancia;

void setup() {
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  Serial.begin (9600);
}

void loop() {
  digitalWrite(trig, LOW);    // Nos aseguramos de que el trigger está desactivado
  delayMicroseconds(2);       // Para estar seguros de que el trigger ya está LOW
  digitalWrite(trig, HIGH);   // Activamos el pulso de salida
  delayMicroseconds(10);      // Esperamos 10µs. El pulso sigue active este tiempo
  digitalWrite(trig, LOW);    // Cortamos el pulso y a esperar el echo

  duracion = pulseIn(echo, HIGH) ; //Mediante pulsein calculamos la duración de la señal

  distancia = duracion / (29*2);
  //distancia = duracion * (0.034/2);

  Serial.print("La distancia en centimetros es: ");
  Serial.println(distancia);
}
