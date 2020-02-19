//Encendido de un LED mediante un botón

int pinLed = 12;    //Le damos nombre a nuestro Led
int pinBoton = 11;  //Le damos un nombre a nuestro boton
int Boton;          //Variable para guardar el valor del boton

void setup() {
  pinMode(pinLed, OUTPUT);  //El led va a ser salida
  pinMode(pinBoton, INPUT); //El botón va a ser entrada

  Serial.begin(9600);
}

void loop() {                     //Modificar los valores de los delay
  Boton = digitalRead(pinBoton);  //Guardamos el valor del boton (Pulsado o no)
  if (Boton == 0) {               //Si está pulsado encendemos el LED
    digitalWrite(pinLed, HIGH);   //LED encendido
    delay(500);                   //Esperamos 0.500 segundos
  }

  else {                          //Si no está pulsado apagamos el LED
    digitalWrite(pinLed, LOW);    //LED apagado
    delay(500);                   //Esperamos 0.500 segundos
  }
}
