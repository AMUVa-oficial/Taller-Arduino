int R = 11;
int G = 10;
int B = 9;

void setup() {
  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT);

  Serial.begin(9600);
}

//Función para mostrar el color por el LED RGB
void Color(int Red, int Green, int Blue) {
  analogWrite(R, 255 - Red);
  analogWrite(G, 255 - Green);
  analogWrite(B, 255 - Blue);
}

void loop() {
  Color(255, 0, 0) ;
  delay(500);
  Color(0, 255, 0) ;
  delay(500);
  Color(0, 0, 255) ;
  delay(500);
  Color(255, 255, 255);
  delay(500);
  Color(0, 0, 0);
  delay(500);
}
