#include <Servo.h>
Servo miServo;
int pinServo = 9;
int pinVx = 0;
int Vx;

void setup() {
  miServo.attach(pinServo);
}

void loop() {
  Vx = analogRead(pinVx);


  Vx = map(Vx, 0, 1023, 0, 179);


  miServo.write(Vx);

  delay(15);
}
