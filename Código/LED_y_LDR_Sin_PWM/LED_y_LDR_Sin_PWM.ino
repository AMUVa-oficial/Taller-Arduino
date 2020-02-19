//Ejemplo de encendido de LED según un cierto nivel de luz

int pinLed = 12;  //Le damos nombre a nuestro LED
int pinLdr = A0;   //Le damos nombre a nuestro LDR
int LDR;          //Variable para guardar el valor del LDR
int i;            //Variable para condicionales

void setup() {
  pinMode(pinLed, OUTPUT);  //El LED es de salida
  pinMode(pinLdr, INPUT);
  Serial.begin(9600);
}

void loop() {
  LDR = analogRead(pinLdr);         //Leemos el valor de pinLdr y lo guardamos en LDR
  Serial.print("Valor del LDR original: ");  //Mostramos por el port el valor del LDR
  Serial.println(LDR);              //Puede tomar valores desde 0 a 1023;
  
  LDR = map(LDR, 0, 1023, 0, 255);  //Cambiamos de valor
  Serial.print("Valor del LDR mapeado: ");  //Mostramos por el port el valor del LDR
  Serial.println(LDR);              //Puede tomar valores desde 0 a 255;

  if (LDR > 123) {                  //Si la luz es menos de la mitad se enciende el LED
    digitalWrite(pinLed, HIGH);
    delay(200);
  }

  else {        //Si la luz es mas de la mitad se apaga el LED
    digitalWrite(pinLed, LOW);
    delay(200);
  }

}
