#include "pitches.h"

#define SPEAKER 11
#define LED     12

// PWM is 490Hz
#define TX_C5 523 //C5 in HZ
#define T_C5  239
#define T_CS5 225
#define T_D5  213
#define T_DS5 201
#define T_E5  189
#define T_F5  179
#define T_FS5 168
#define T_G5  159
#define T_GS5 150
#define T_A5  142
#define T_AS5 134
#define T_B5  126

void setup() {
  // put your setup code here, to run once:
  pinMode(SPEAKER, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  /*
  analogWrite(SPEAKER, 20);
  delay(1000);
  analogWrite(SPEAKER, 50);
  delay(1000);
  analogWrite(SPEAKER, 80);
  delay(1000);
  analogWrite(SPEAKER, 120);
  delay(1000); */
  //analogWrite(SPEAKER, T_C5);
  //delay(1000);

  // twinkle twinkle little star
  // 6 x 7 notes
  analogWrite(SPEAKER, T_C5);
  delay(490);
  analogWrite(SPEAKER, 0);
  delay(10);
  analogWrite(SPEAKER, T_C5);
  delay(490);
  analogWrite(SPEAKER, 0);
  delay(10);
  analogWrite(SPEAKER, T_G5);
  delay(490);
  analogWrite(SPEAKER, 0);
  delay(10);
  analogWrite(SPEAKER, T_G5);
  delay(490);
  analogWrite(SPEAKER, 0);
  delay(10);
  analogWrite(SPEAKER, T_A5);
  delay(490);
  analogWrite(SPEAKER, 0);
  delay(10);
  analogWrite(SPEAKER, T_A5);
  delay(490);
  analogWrite(SPEAKER, 0);
  delay(10);
  analogWrite(SPEAKER, T_G5);
  delay(990);
  analogWrite(SPEAKER, 0);
  delay(10);

  analogWrite(SPEAKER, T_F5);
  delay(490);
  analogWrite(SPEAKER, 0);
  delay(10);
  analogWrite(SPEAKER, T_F5);
  delay(490);
  analogWrite(SPEAKER, 0);
  delay(10);
  analogWrite(SPEAKER, T_E5);
  delay(490);
  analogWrite(SPEAKER, 0);
  delay(10);
  analogWrite(SPEAKER, T_E5);
  delay(490);
  analogWrite(SPEAKER, 0);
  delay(10);
  analogWrite(SPEAKER, T_D5);
  delay(490);
  analogWrite(SPEAKER, 0);
  delay(10);
  analogWrite(SPEAKER, T_D5);
  delay(490);
  analogWrite(SPEAKER, 0);
  delay(10);
  analogWrite(SPEAKER, T_C5);
  delay(990);
  analogWrite(SPEAKER, 0);
  delay(10);

  // measures 3 -4
  analogWrite(SPEAKER, T_G5);
  delay(490);
  analogWrite(SPEAKER, 0);
  delay(10);
  analogWrite(SPEAKER, T_G5);
  delay(490);
  analogWrite(SPEAKER, 0);
  delay(10);
  analogWrite(SPEAKER, T_F5);
  delay(490);
  analogWrite(SPEAKER, 0);
  delay(10);
  analogWrite(SPEAKER, T_F5);
  delay(490);
  analogWrite(SPEAKER, 0);
  delay(10);
  analogWrite(SPEAKER, T_E5);
  delay(490);
  analogWrite(SPEAKER, 0);
  delay(10);
  analogWrite(SPEAKER, T_E5);
  delay(490);
  analogWrite(SPEAKER, 0);
  delay(10);
  analogWrite(SPEAKER, T_G5);
  delay(990);
  analogWrite(SPEAKER, 0);
  delay(10);

  analogWrite(SPEAKER, T_G5);
  delay(490);
  analogWrite(SPEAKER, 0);
  delay(10);
  analogWrite(SPEAKER, T_G5);
  delay(490);
  analogWrite(SPEAKER, 0);
  delay(10);
  analogWrite(SPEAKER, T_F5);
  delay(490);
  analogWrite(SPEAKER, 0);
  delay(10);
  analogWrite(SPEAKER, T_F5);
  delay(490);
  analogWrite(SPEAKER, 0);
  delay(10);
  analogWrite(SPEAKER, T_E5);
  delay(490);
  analogWrite(SPEAKER, 0);
  delay(10);
  analogWrite(SPEAKER, T_E5);
  delay(490);
  analogWrite(SPEAKER, 0);
  delay(10);
  analogWrite(SPEAKER, T_D5);
  delay(990);
  analogWrite(SPEAKER, 0);
  delay(10);
  
  analogWrite(SPEAKER, T_C5);
  delay(490);
  analogWrite(SPEAKER, 0);
  delay(10);
  analogWrite(SPEAKER, T_C5);
  delay(490);
  analogWrite(SPEAKER, 0);
  delay(10);
  analogWrite(SPEAKER, T_G5);
  delay(490);
  analogWrite(SPEAKER, 0);
  delay(10);
  analogWrite(SPEAKER, T_G5);
  delay(490);
  analogWrite(SPEAKER, 0);
  delay(10);
  analogWrite(SPEAKER, T_A5);
  delay(490);
  analogWrite(SPEAKER, 0);
  delay(10);
  analogWrite(SPEAKER, T_A5);
  delay(490);
  analogWrite(SPEAKER, 0);
  delay(10);
  analogWrite(SPEAKER, T_G5);
  delay(990);
  analogWrite(SPEAKER, 0);
  delay(10);

  analogWrite(SPEAKER, T_F5);
  delay(490);
  analogWrite(SPEAKER, 0);
  delay(10);
  analogWrite(SPEAKER, T_F5);
  delay(490);
  analogWrite(SPEAKER, 0);
  delay(10);
  analogWrite(SPEAKER, T_E5);
  delay(490);
  analogWrite(SPEAKER, 0);
  delay(10);
  analogWrite(SPEAKER, T_E5);
  delay(490);
  analogWrite(SPEAKER, 0);
  delay(10);
  analogWrite(SPEAKER, T_D5);
  delay(490);
  analogWrite(SPEAKER, 0);
  delay(10);
  analogWrite(SPEAKER, T_D5);
  delay(490);
  analogWrite(SPEAKER, 0);
  delay(10);
  analogWrite(SPEAKER, T_C5);
  delay(990);
  analogWrite(SPEAKER, 255);
  delay(10);

  delay(2000);
  
}
