//Ejemplo de encendido de LED según la posición del Joystick sin PWM

int pinRojo = 12;  //Le damos nombre a nuestro LED
int pinAzul = 11;
int pinAmarillo = 10;
int pinVerde = 9;
int pinVx = 0;    //Le damos nombre a nuestro joystick horizontal
int pinVy = 1;    //Le damos nombre a nuestro joystick vertical
int vx;           //Variable para almacenar el valor de pinVx
int vy;           //Variable para almacenar el valor de pinVy
int i;            //Variable para condicionales

void setup() {
  pinMode(pinRojo, OUTPUT);   //Todos los LEDs son de salida
  pinMode(pinAzul, OUTPUT);
  pinMode(pinAmarillo, OUTPUT);
  pinMode(pinVerde, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  vx = analogRead(pinVx);   //Leemos el valor de pinLdr y lo guardamos en vx
  vy = analogRead(pinVy);

  Serial.print("X:");
  Serial.print(vx);
  Serial.print("   Y:");
  Serial.println(vy);
  delay(200); 
  
  //Leds horizontales
  if (vx > 900) {
    digitalWrite(pinRojo, HIGH);
    delay(100);
  }
  if (vx < 100) {
    digitalWrite(pinAzul, HIGH);
    delay(100);
  }

  //Leds verticales
  if (vy > 900) {
    digitalWrite(pinAmarillo, HIGH);
    delay(100);
  }
  if (vy < 100) {
    digitalWrite(pinVerde, HIGH);
    delay(100);
  }
  
}

