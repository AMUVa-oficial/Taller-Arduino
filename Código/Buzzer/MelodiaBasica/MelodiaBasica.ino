/*
  Melody

  Plays a melody

  circuit:
   8-ohm speaker on digital pin 8

  created 21 Jan 2010
  modified 30 Aug 2011
  by Tom Igoe

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Tone

*/
#include "pitches.h"

// notas en la melodía (un array):
int melody[] = {
  NOTE_C4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_G3, 0, NOTE_B3, NOTE_C4
};
// Duración de las notas: 4 = una cuarta, 8 = una octava, etc.:
int noteDurations[] = {
  4, 8, 8, 4, 4, 4, 4, 4
};

void setup() {
  //tone ya declara el pinBuzz como OUTPUT
}

void loop() {
  // con for accedermos a cada elemento del array:
  for (int thisNote = 0; thisNote < 8; thisNote++) {

    // Para calcular la duración, dividimos un segundo por
    // la duración del tono.
    // Por ejemplo, Una cuarta = 1000 / 4, una octava = 1000/8, etc.
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(9, melody[thisNote], noteDuration);

    // Para distinguir entre notas, definimos un mínimo entre ellos.
    // Este es un ejemplo dela duración entre notas (un 130% de la duración):
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    // paramos la melodia
    noTone(9);
  }
}
