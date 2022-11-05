#include "synth_1.1.h"

void setup() {
  // put your setup code here, to run once:
	/* set digital pins 0-12 as our twelve keys */
	for (int i = 0; i < 13; ++i){
		pinMode(i, INPUT);
	}
	/* set pins A0, A1, & A2 as our audio signal out pins */
	synthVoice[0].begin(A0);
	synthVoice[1].begin(A1);
	synthVoice[2].begin(A2);
}

void loop() {
  // put your main code here, to run repeatedly:
	for (int i = 0; i < 13; ++i){
		if (digitalRead(i) == 1){
			if (!synthVoice[sv_i].isPlaying()
			     && keys[(sv_i + 1) % 3] != i
			     && keys[(sv_i + 2) % 3] != i){
				synthVoice[sv_i].play(notes[i]);
				keys[sv_i] = i;
				sv_i = ++sv_i % 3;
			}
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
