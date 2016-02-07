 /*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
*/
 
int ledPinNo = 1; // blink 'digital' pin 1 - AKA the built in red LED
 
// the setup routine runs once when you press reset:
void setup() {
  // initialize the digital pin as an output.
  pinMode(ledPinNo, OUTPUT);
 
}
 
// the loop routine runs over and over again forever:
void loop() {
    digitalWrite(ledPinNo, LOW);
    delay(5000);
    preamble();
    blinkEncodeNumber( 9067 );
    delay(5000);
}

void preamble(){
    //for( int i=0; i<5; i++ ){
      digitalWrite(ledPinNo, HIGH); 
      delay(2000);
      digitalWrite(ledPinNo, LOW);
      delay(500);
    //}  
}

void blinkEncodeDigit( int digit ){
  blinkEncodeDigit( digit, 500, 1000 );
}
void blinkEncodeDigit( int digit, int onTime, int offTime ){ 
  if( digit == 0 ){
      digitalWrite(ledPinNo, HIGH); 
      delay(30);
      digitalWrite(ledPinNo, LOW);
      delay(30);
      digitalWrite(ledPinNo, HIGH); 
      delay(30);
      digitalWrite(ledPinNo, LOW);
      delay(30);
      digitalWrite(ledPinNo, HIGH); 
      delay(30);
      digitalWrite(ledPinNo, LOW);
      delay(1000);
      return;
  }
  for( int i=0; i<digit; i++ ){
      digitalWrite(ledPinNo, HIGH); 
      delay(500);
      digitalWrite(ledPinNo, LOW);
      delay(1000);
    }
}

void blinkEncodeNumber( int num ){
  if( num <= 0 ) return;
  blinkEncodeNumber( ~~(num/10) );
  int d = num%10;
  blinkEncodeDigit(d);
  delay(2000);
}
