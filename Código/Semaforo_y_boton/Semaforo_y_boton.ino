//Ejemplo de un semáforo para peatones con botón

int pinVerde = 12;    //Le damos nombre a nuestro LED verde
int pinAmarillo = 11; //Le damos nombre a nuestro LED amarillo
int pinRojo = 10;     //Le damos nombre a nuestro LED rojo
int pinBoton = 8;     //Le damos un nombre a nuestro botón
int Variable;            //Variable para guardar el valor del botón

void setup() {
  pinMode(pinVerde, OUTPUT);    //Todos los LEDs van a ser salida
  pinMode(pinAmarillo, OUTPUT);
  pinMode(pinRojo, OUTPUT);
  pinMode(pinBoton, INPUT);     //El botón va a ser entrada

  Serial.begin(9600);
}

void loop() {
  if(digitalRead(pinBoton))      //Si se pulsa el boton, se suma uno a la variable
  {
    Variable++;
  }
  switch (Variable%3)            //Comparamos el resto de dividir el valor de la
  {
    case (0):
    digitalWrite(pinVerde,HIGH);
    digitalWrite(pinAmarillo,LOW);
    digitalWrite(pinRojo,LOW);
      break;
  }
}
