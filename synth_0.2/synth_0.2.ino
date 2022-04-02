// Duelling Tones - Simultaneous tone generation.
// To mix the output of the signals to output to a small speaker (i.e. 8 Ohms or higher),
// simply use 1K Ohm resistors from each output pin and tie them together at the speaker.
// Don't forget to connect the other side of the speaker to ground!

// This example plays notes 'a' through 'g' sent over the Serial Monitor.
// 's' stops the current playing tone.  Use uppercase letters for the second.

#include <Tone.h>

int notes[] = { NOTE_A3,
                NOTE_B3,
                NOTE_C4,
                NOTE_D4,
                NOTE_E4,
                NOTE_F4,
                NOTE_G4 };

// You can declare the tones as an array
Tone notePlayer[2];
int j = 1;

void setup(void)
{
  Serial.begin(9600);
  notePlayer[0].begin(A0);
  notePlayer[1].begin(A1);

  delay(2000);
  notePlayer[0].play(NOTE_D4);
  delay(2000);
  notePlayer[1].play(NOTE_G4);
  delay(1000);
  notePlayer[0].stop();
  delay(3000);
  notePlayer[1].stop();
  delay(3000);

  notePlayer[0].play(NOTE_C4);
  delay(2000);
  notePlayer[1].play(NOTE_G4);
  delay(1000);
  notePlayer[0].stop();
  delay(3000);
  notePlayer[1].stop();
  delay(3000);
}

void loop(void)
{/*
  delay(2000);
  notePlayer[0].play(NOTE_D4);
  delay(2000);
  notePlayer[1].play(NOTE_G4);
  delay(1000);
  notePlayer[0].stop();
  delay(3000);
  notePlayer[1].stop();
  delay(3000); */

  notePlayer[0].play(NOTE_E3);
  delay(1000);
  notePlayer[0].play(NOTE_D8);
  delay(1000);
  notePlayer[0].stop();
  if (j == 5){
    notePlayer[1].play(NOTE_A4);
  }
  if (j == 10){
    notePlayer[1].stop();
    j = 0;
  }
  ++j;
  delay(1000);
}
