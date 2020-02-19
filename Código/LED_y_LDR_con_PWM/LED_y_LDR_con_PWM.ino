//Ejemplo de encendido de LED según la intensidad de PWM

int pinLed = 11;  //Le damos nombre a nuestro LED
int pinLdr = 0;   //Le damos nombre a nuestro LDR
int LDR;          //Variable para guardar el valor del LDR
int i;            //Variable para condicionales

void setup() {
  pinMode(pinLed, OUTPUT);  //El LED es de salida

  Serial.begin(9600);
}

void loop() {
  LDR = analogRead(pinLdr);         //Leemos el valor de pinLdr y lo guardamos en LDR
  Serial.print("Valor del LDR original: ");  //Mostramos por el port el valor del LDR
 // Serial.println(LDR);              //Puede tomar valores desde 0 a 1023;

  LDR = map(LDR, 0, 1023, 255,0);  //Cambiamos de valor
  Serial.print("Valor del LDR mapeado: ");  //Mostramos por el port el valor del LDR
  Serial.println(LDR);              //Puede tomar valores desde 0 a 255;

  analogWrite(pinLed, LDR);         //Se enciende el led según la intensidad de la luz
  delay(100);

}
