#include <Servo.h>    // Incluir la librería Servo
Servo miServo;        // Crear un objeto tipo Servo llamado myServo

int pinServo = 2;     // Pin PWM donde estará conectado la señal
int angulo = 100 ;

void setup() {
  miServo.attach(pinServo); //Conectamos pinServo a nuestro objeto PinServo
                            //para enviar un determinado giro
}

void loop() {
  /*
  for (angulo  = 0; angulo  <= 180; angulo=angulo+10)  //incrementa angulo 1 grado
  {
    miServo.write(angulo);
    delay(25);
  }
  for (angulo  = 180; angulo  >= 0; angulo=angulo-4)  //decrementa angulo 1 grado
  {
    miServo.write(angulo);
    delay(25);
  }
  */
}

