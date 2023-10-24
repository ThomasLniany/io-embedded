/*
  Hello World (Blink)
  This project turns a LED on for one second, then off for one second in a loop.
  The LEB_BUILTIN means the pin, where the LED is set on the board. The pin varies 
  on every arduino board.
*/

void setup() {
  // put your setup code here, to run once:
pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(LED_BUILTIN, HIGH);
delay(1000);
digitalWrite(LED_BUILTIN, LOW);
delay(1000);
}
