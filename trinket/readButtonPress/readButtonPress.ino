// Switches are connected from ground to these defined pins
const byte PIN_BUTTON_CAPITAL_A = 4;
const byte PIN_BUTTON_STRING    = 2;
const byte BUILT_IN_LED         = 1;

void setup()
{
  // Declare button pins as inputs
  pinMode(PIN_BUTTON_CAPITAL_A, INPUT);
  pinMode(PIN_BUTTON_STRING,    INPUT);

  // setting input pins to high means turning on internal pull-up resistors
  digitalWrite(PIN_BUTTON_CAPITAL_A, HIGH);
  digitalWrite(PIN_BUTTON_STRING,    HIGH);
  // remember, the buttons are active-low, they read LOW when they are not pressed
}

void loop()
{
  if (digitalRead(PIN_BUTTON_STRING) == LOW)
  {
     digitalWrite(BUILT_IN_LED, LOW);
  }
    if (digitalRead(PIN_BUTTON_STRING) == HIGH)
  {
     digitalWrite(BUILT_IN_LED, HIGH);
     delay(1000);
  }
}
