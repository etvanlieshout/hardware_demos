
// some global vars
int i = 0;
int j = 0;

void setup() {
  // put your setup code here, to run once:
  for (int s = 0; s < 8; ++s){
    pinMode(s, OUTPUT);
  }
  pinMode(8, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  // cycle through the LEDS in a group of 4
  for (i = j; i < j+4; ++i){
    digitalWrite(i, HIGH); // turn an LED on
    delay(1000);           // delay 1 second
    digitalWrite(i, LOW ); // turn the LED back off
  }

  if (digitalRead(8) == 1) {
    j = 4;
  }
  else {
    j = 0;
  }
}
