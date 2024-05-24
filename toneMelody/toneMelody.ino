
#include "pitches.h"
int buttonState = 0;
// notes in the melody:
int melody[] = {
  NOTE_C5,NOTE_D5,NOTE_E5,NOTE_E5,NOTE_G5,NOTE_A5, 
  NOTE_A5,NOTE_E6,NOTE_D6,NOTE_C6,NOTE_C6,NOTE_A5, 
  NOTE_G5,NOTE_A5,NOTE_G5,NOTE_E5,NOTE_D5,NOTE_C5,
  NOTE_A4,NOTE_C5,NOTE_D5,NOTE_D5,NOTE_C5,NOTE_D5,
  NOTE_C5,NOTE_D5,NOTE_E5,NOTE_E5,NOTE_G5,NOTE_A5,
  NOTE_A5,NOTE_E6,NOTE_D6,NOTE_C6,NOTE_C6,NOTE_D6,
  NOTE_C6,NOTE_G5,NOTE_G5,NOTE_E5,NOTE_B5,NOTE_C6,
  NOTE_C5,NOTE_D5,NOTE_E5,NOTE_D5,NOTE_C5,
};

int melody2[] = {
  523, 1047, 988, 784, 880, 880,
  523, 1047, 988, 880, 784, 784,
  659, 659, 784, 784, 880, 880,
  880, 988, 1046,1175, 1397,1397,
  1319, 1319, 1175, 1319, 1175, 1047,
  1047, 988, 1047, 1175, 988, 1047,
  1175, 1047, 1047, 1319, 1397, 1319,
  1047, 1047, 1175, 1319, 1397, 1397,
  988, 1175, 1047
};

int noteDurations[] = {
  4, 4, 3, 4, 4, 3,
  4, 4, 4, 4, 4, 4,
  2, 4, 4, 4, 4, 2,
  4, 4, 2, 4, 4, 2,
  4, 4, 2, 4, 4, 2,
  4, 4, 4, 4, 4, 4,
  1, 2, 4, 4, 4, 4,
  4, 4, 1, 1, 1
};

int noteDurations2[] = {
  3, 4, 4, 4, 4, 2,
  4, 4, 4, 4, 4, 2,
  3, 4, 4, 4, 3, 2,
  4, 4, 4, 3, 2, 2,
  3, 2, 4, 4, 4, 2,
  3, 4, 4, 3, 4, 4,
  3, 3, 2, 3, 3, 3,
  3, 3, 3, 3, 3, 3,
  3, 3, 1
};

void setup() {
  // iterate over the notes of the melody:
  
  pinMode(9,INPUT_PULLUP);
  

}

void loop() {
  int buttonState = digitalRead(9);

  if(buttonState == 0){
    for (int thisNote = 0; thisNote < 47; thisNote++) {

      int noteDuration = 1000 / noteDurations[thisNote];
      tone(8, melody[thisNote], noteDuration);

      int pauseBetweenNotes = noteDuration * 1.30;
      delay(pauseBetweenNotes);
      noTone(8);
    }

  }
  else
    for (int thisNote = 0; thisNote < 52; thisNote++) {

      int noteDuration2 = 1000 / noteDurations2[thisNote];
      tone(8, melody2[thisNote], noteDuration2);

      int pauseBetweenNotes = noteDuration2 * 1.30;
      delay(pauseBetweenNotes);
      noTone(8);
    }

  }





