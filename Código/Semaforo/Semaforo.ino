//Ejemplo de un semaforo hecho con LEDs

int pinVerde = 12;    //Le damos nombre a nuestro LED verde
int pinAmarillo = 11; //Le damos nombre a nuestro LED amarillo
int pinRojo = 10;     //Le damos nombre a nuestro LED rojo

void setup() {
  pinMode(pinVerde, OUTPUT);    //Todos los LEDs van a ser salida
  pinMode(pinAmarillo, OUTPUT);
  pinMode(pinRojo, OUTPUT);

  Serial.begin(9600);
}

void loop() {                       //Modificar los valores de los delay
  digitalWrite(pinVerde, HIGH);     //Encendemos el Verde
  delay(1500);                      //Esperamos 1,5 segundos
  digitalWrite(pinVerde, LOW);      //Apagamos el Verde
  digitalWrite(pinAmarillo, HIGH);  //Encendemos el Amarillo
  delay(250);                       //Esperamos 0.250 segundos
  digitalWrite(pinAmarillo, LOW);   //Apagamos el Amarillo
  digitalWrite(pinRojo, HIGH);      //Encendemos el Rojo
  delay(2000);                      //Esperamos 2 segundos
  digitalWrite(pinRojo, LOW);       //Apagamos el Rojo
  delay(50);                        //Esperamos 0.05 segundos
}
