//Intermitencia de un LED

int led=12; //Le damos nombre a nuestro Led

void setup() {
  pinMode(led, OUTPUT);  //El led va a ser salida
}

void loop()                     //Modificar los valores de los delay
{
    digitalWrite(led, HIGH);    //LED encendido
    delay(700);                 //Esperamos 0.700 segundos
    digitalWrite(led, LOW);     //LED encendido
    delay(700);                 //Esperamos 0.700 segundos

}
