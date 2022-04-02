#include "synth_1.1.h"

void setup() {
  // put your setup code here, to run once:
  /* set digital pins 0-12 as our twelve keys */
  pinMode( 0, INPUT);
  pinMode( 1, INPUT);
  pinMode( 2, INPUT);
  pinMode( 3, INPUT);
  pinMode( 4, INPUT);
  pinMode( 5, INPUT);
  pinMode( 6, INPUT);
  pinMode( 7, INPUT);
  pinMode( 8, INPUT);
  pinMode( 9, INPUT);
  pinMode(10, INPUT);
  pinMode(11, INPUT);
  pinMode(12, INPUT);

  synthVoice[0].begin(A0);
  synthVoice[1].begin(A1);
  synthVoice[2].begin(A2);

}

void loop() {
  // put your main code here, to run repeatedly:

  if (digitalRead(0) == 1){
    if (!synthVoice[sv_i].isPlaying()
         && keys[(sv_i + 1) % 3] != 0
         && keys[(sv_i + 2) % 3] != 0){
      synthVoice[sv_i].play(NOTE_C3);
      keys[sv_i] = 0;
      sv_i = ++sv_i % 3;
    }
  }
  if (digitalRead(1) == 1){
    if (!synthVoice[sv_i].isPlaying()
         && keys[(sv_i + 1) % 3] != 1
         && keys[(sv_i + 2) % 3] != 1){
      synthVoice[sv_i].play(NOTE_CS4);
      keys[sv_i] = 1;
      sv_i = ++sv_i % 3;
    }
  }
  if (digitalRead(2) == 1){
    if (!synthVoice[sv_i].isPlaying()
         && keys[(sv_i + 1) % 3] != 2
         && keys[(sv_i + 2) % 3] != 2){
      synthVoice[sv_i].play(NOTE_D4);
      keys[sv_i] = 2;
      sv_i = ++sv_i % 3;
    }
  }
  if (digitalRead(3) == 1){
    if (!synthVoice[sv_i].isPlaying()
         && keys[(sv_i + 1) % 3] != 3
         && keys[(sv_i + 2) % 3] != 3){
      synthVoice[sv_i].play(NOTE_DS4);
      keys[sv_i] = 3;
      sv_i = ++sv_i % 3;
    }
  }
  if (digitalRead(4) == 1){
    if (!synthVoice[sv_i].isPlaying()
         && keys[(sv_i + 1) % 3] != 4
         && keys[(sv_i + 2) % 3] != 4){
      synthVoice[sv_i].play(NOTE_E4);
      keys[sv_i] = 4;
      sv_i = ++sv_i % 3;
    }
  }
  if (digitalRead(5) == 1){
    if (!synthVoice[sv_i].isPlaying()
         && keys[(sv_i + 1) % 3] != 5
         && keys[(sv_i + 2) % 3] != 5){
      synthVoice[sv_i].play(NOTE_F4);
      keys[sv_i] = 5;
      sv_i = ++sv_i % 3;
    }
  }
  if (digitalRead(6) == 1){
    if (!synthVoice[sv_i].isPlaying()
         && keys[(sv_i + 1) % 3] != 6
         && keys[(sv_i + 2) % 3] != 6){
      synthVoice[sv_i].play(NOTE_FS4);
      keys[sv_i] = 6;
      sv_i = ++sv_i % 3;
    }
  }
  if (digitalRead(7) == 1){
    if (!synthVoice[sv_i].isPlaying()
         && keys[(sv_i + 1) % 3] != 7
         && keys[(sv_i + 2) % 3] != 7){
      synthVoice[sv_i].play(NOTE_G4);
      keys[sv_i] = 7;
      sv_i = ++sv_i % 3;
    }
  }
  if (digitalRead(8) == 1){
    if (!synthVoice[sv_i].isPlaying()
         && keys[(sv_i + 1) % 3] != 8
         && keys[(sv_i + 2) % 3] != 8){
      synthVoice[sv_i].play(NOTE_GS4);
      keys[sv_i] = 8;
      sv_i = ++sv_i % 3;
    }
  }
  if (digitalRead(9) == 1){
    if (!synthVoice[sv_i].isPlaying()
         && keys[(sv_i + 1) % 3] != 9
         && keys[(sv_i + 2) % 3] != 9){
      synthVoice[sv_i].play(NOTE_A4);
      keys[sv_i] = 9;
      sv_i = ++sv_i % 3;
    }
  }
  if (digitalRead(10) == 1){
    if (!synthVoice[sv_i].isPlaying()
         && keys[(sv_i + 1) % 3] != 10
         && keys[(sv_i + 2) % 3] != 10){
      synthVoice[sv_i].play(NOTE_AS4);
      keys[sv_i] = 10;
      sv_i = ++sv_i % 3;
    }
  }
  if (digitalRead(11) == 1){
    if (!synthVoice[sv_i].isPlaying()
         && keys[(sv_i + 1) % 3] != 11
         && keys[(sv_i + 2) % 3] != 11){
      synthVoice[sv_i].play(NOTE_G4);
      keys[sv_i] = 11;
      sv_i = ++sv_i % 3;
    }
  }
  if (digitalRead(12) == 1){
    if (!synthVoice[sv_i].isPlaying()
         && keys[(sv_i + 1) % 3] != 12
         && keys[(sv_i + 2) % 3] != 12){
      synthVoice[sv_i].play(NOTE_C5);
      keys[sv_i] = 12;
      sv_i = ++sv_i % 3;
    }
  }

  /* the following code stops notes */
  for( int i = 0; i < 3; ++i ){
    if (keys[i] > -1 && digitalRead(keys[i]) == 0) {
      synthVoice[i].stop();
      keys[i] = -1;
    }
  }

}
