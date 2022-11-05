/* re-written to use pins D2 - D10 on the Arduino Nano */
// some global vars
int i = 2;
int j = 2;

void setup() {
  // put your setup code here, to run once:
  for (int s = 2; s < 10; ++s){
    pinMode(s, OUTPUT);
  }
  pinMode(10, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  // cycle through the LEDS in a group of 4
  for (i = j; i < j+4; ++i){
    digitalWrite(i, HIGH); // turn an LED on
    delay(1000);           // delay 1 second
    digitalWrite(i, LOW ); // turn the LED back off
  }

  if (digitalRead(10) == 1) {
    j = 6;
  }
  else {
    j = 2;
  }
}
