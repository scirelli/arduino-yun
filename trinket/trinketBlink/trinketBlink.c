 /*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
*/
 
int led = 3; // blink 'digital' pin 1 - AKA the built in red LED
 
// the setup routine runs once when you press reset:
void setup() {
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);
 
}
 
// the loop routine runs over and over again forever:
void loop() {
    digitalWrite(led, HIGH); 
    delay(1000);
    digitalWrite(led, LOW);
    delay(5000);
}
