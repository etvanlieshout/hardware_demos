#include "synth_1.0.h"

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
         && keys[(sv_i + 1) % 3] != 3
	       && keys[(sv_i + 2) % 3] != 3){
      synthVoice[sv_i].play(NOTE_D3);
      keys[sv_i] = 2;
      sv_i = ++sv_i % 3;
    }
  }
  if (digitalRead(1) == 1){
    if (!synthVoice[sv_i].isPlaying()
         && keys[(sv_i + 1) % 3] != 3
	       && keys[(sv_i + 2) % 3] != 3){
      synthVoice[sv_i].play(NOTE_D3);
      keys[sv_i] = 2;
      sv_i = ++sv_i % 3;
    }
  }
  if (digitalRead(2) == 1){
    if (!synthVoice[sv_i].isPlaying()
         && keys[(sv_i + 1) % 3] != 3
	       && keys[(sv_i + 2) % 3] != 3){
      synthVoice[sv_i].play(NOTE_D3);
      keys[sv_i] = 2;
      sv_i = ++sv_i % 3;
    }
  }
  if (digitalRead(3) == 1){
    if (!synthVoice[sv_i].isPlaying()
         && keys[(sv_i + 1) % 3] != 3
         && keys[(sv_i + 2) % 3] != 3){
      synthVoice[sv_i].play(NOTE_DS3);
      keys[sv_i] = 2;
      sv_i = ++sv_i % 3;
    }
  }
  if (digitalRead(4) == 1){
    if (!synthVoice[sv_i].isPlaying()
         && keys[(sv_i + 1) % 3] != 3
         && keys[(sv_i + 2) % 3] != 3){
      synthVoice[sv_i].play(NOTE_E3);
      keys[sv_i] = 2;
      sv_i = ++sv_i % 3;
    }
  }
  if (digitalRead(5) == 1){
    if (!synthVoice[sv_i].isPlaying()
         && keys[(sv_i + 1) % 3] != 3
         && keys[(sv_i + 2) % 3] != 3){
      synthVoice[sv_i].play(NOTE_F3);
      keys[sv_i] = 2;
      sv_i = ++sv_i % 3;
    }
  }
  if (digitalRead(6) == 1){
    if (!synthVoice[sv_i].isPlaying()
         && keys[(sv_i + 1) % 3] != 3
         && keys[(sv_i + 2) % 3] != 3){
      synthVoice[sv_i].play(NOTE_FS3);
      keys[sv_i] = 2;
      sv_i = ++sv_i % 3;
    }
  }
  if (digitalRead(7) == 1){
    if (!synthVoice[sv_i].isPlaying()
         && keys[(sv_i + 1) % 3] != 3
         && keys[(sv_i + 2) % 3] != 3){
      synthVoice[sv_i].play(NOTE_G3);
      keys[sv_i] = 2;
      sv_i = ++sv_i % 3;
    }
  }
  if (digitalRead(9) == 1){
    if (!synthVoice[sv_i].isPlaying()
         && keys[(sv_i + 1) % 3] != 3
         && keys[(sv_i + 2) % 3] != 3){
      synthVoice[sv_i].play(NOTE_GS3);
      keys[sv_i] = 2;
      sv_i = ++sv_i % 3;
    }
  }
  if (digitalRead(10) == 1){
    if (!synthVoice[sv_i].isPlaying()
         && keys[(sv_i + 1) % 3] != 3
         && keys[(sv_i + 2) % 3] != 3){
      synthVoice[sv_i].play(NOTE_A3);
      keys[sv_i] = 2;
      sv_i = ++sv_i % 3;
    }
  }
  if (digitalRead(11) == 1){
    if (!synthVoice[sv_i].isPlaying()
         && keys[(sv_i + 1) % 3] != 3
         && keys[(sv_i + 2) % 3] != 3){
      synthVoice[sv_i].play(NOTE_AS3);
      keys[sv_i] = 2;
      sv_i = ++sv_i % 3;
    }
  }
  if (digitalRead(12) == 1){
    if (!synthVoice[sv_i].isPlaying()
         && keys[(sv_i + 1) % 3] != 3
         && keys[(sv_i + 2) % 3] != 3){
      synthVoice[sv_i].play(NOTE_G3);
      keys[sv_i] = 2;
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
