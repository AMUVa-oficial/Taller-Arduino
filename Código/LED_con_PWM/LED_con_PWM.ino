//LEDs Ejemplo básico con salida PWM

int pinLed = 11;  //Le damos nombre a nuestro pin
int i;            //Variable para condicionales

void setup() {
  pinMode(pinLed, OUTPUT);  //Sería lo mismo que escribir pinMode(12, OUTPUT);

  Serial.begin(9600);
}

void loop() {               //Cambiar los valores de los delay
  for (int i = 0; i < 256; i++)
  {
    analogWrite(pinLed, i); //Encendemos el LED gradualmente
    delay(50);   //Esperamos 0.050 segundos
    Serial.println(i);
  }

  for (int i = 255; i > -1; i--)
  {
    analogWrite(pinLed, i); //Apagamos el LED gradualmente
    delay(50);              //Esperamos 0.050 segundos
    Serial.println(i);
  }
}
