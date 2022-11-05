#include <Tone.h>

Tone synthVoice[3];
int notes[] = {NOTE_C4, NOTE_CS4, NOTE_D4, NOTE_DS4,
               NOTE_E4, NOTE_F4, NOTE_FS4, NOTE_G4,
               NOTE_GS4, NOTE_A4, NOTE_AS4, NOTE_B4,
               NOTE_C5};
int sv_i = 0;
int keys[3] = {-1,-1,-1};
