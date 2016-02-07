 /*
  Blink a string in morse code
*/
#define DOT_DELAY      250
#define DASH_DELAY     750
// 3 * dot or dash delay
#define LETTER_DELAY   DASH_DELAY
//7 times a dot
#define WORD_DELAY     1500

#define ledPinNo 1 // blink 'digital' pin 1 - AKA the built in red LED
#define DOT()({\
            digitalWrite(ledPinNo, HIGH);\
            delay(DOT_DELAY);\
            digitalWrite(ledPinNo, LOW);\
            delay(LETTER_DELAY);\
        })
#define DASH()({\
            digitalWrite(ledPinNo, HIGH);\
            delay(DASH_DELAY);\
            digitalWrite(ledPinNo, LOW);\
            delay(LETTER_DELAY);\
       })

// the setup routine runs once when you press reset:
void setup() {
    // initialize the digital pin as an output.
    pinMode(ledPinNo, OUTPUT); 
}
 
// the loop routine runs over and over again forever:
void loop() {
    digitalWrite(ledPinNo, LOW);
    delay(5000);
    blinkStrMorseCode( "steve is cool", 11 );
}

void blinkStrMorseCode( const char * str, int length ){
    for( int i=0; i<length; i++ ){
        blinkCharMorseCode( *(str+i) );
    }
}

void blinkCharMorseCode( const unsigned char c ){
    switch( c ){
        //48 - 57, 65 -90, 97 - 122
        case 'a' :
        case 'A' :
            DOT();
            DASH();
            break;
        case 'b':
        case 'B':
            DASH();
            DOT();
            DOT();
            DOT();
            break;
        case 'c':
        case 'C':
            DASH();
            DOT();
            DASH();
            DOT();
            break;
        case 'd':
        case 'D':
            DOT();
            DASH();
            DASH();
            break;
        case 'e':
        case 'E':
            DOT();
            break;
        case 'f':
        case 'F':
            DOT();
            DOT();
            DASH();
            DOT();
            break;
        case 'g':
        case 'G':
            DASH();
            DASH();
            DOT();
            break;
        case 'h':
        case 'H':
            DOT();
            DOT();
            DOT();
            DOT();
            break;
        case 'i':
        case 'I':
            DOT();
            DOT();
            break;
        case 'j':
        case 'J':
            DOT();
            DASH();
            DASH();
            DASH();
            break;
        case 'k':
        case 'K':
            DASH();
            DOT();
            DASH();
            break;
        case 'l':
        case 'L':
            DOT();
            DASH();
            DOT();
            DOT();
            break;
        case 'm':
        case 'M':
            DASH();
            DASH();
            break;
        case 'n':
        case 'N':
            DASH();
            DOT();
            break;
        case 'o':
        case 'O':
            DASH();
            DASH();
            DASH();
            break;
        case 'p':
        case 'P':
            DOT();
            DASH();
            DASH();
            DOT();
            break;
        case 'q':
        case 'Q':
            DASH();
            DASH();
            DOT();
            DASH();
            break;
        case 'r':
        case 'R':
            DOT();
            DASH();
            DOT();
            break;
        case 's':
        case 'S':
            DOT();
            DOT();
            DOT();
            break;
        case 't':
        case 'T':
            DASH();
            break;
        case 'u':
        case 'U':
            DOT();
            DOT();
            DASH();
            break;
        case 'v':
        case 'V':
            DOT();
            DOT();
            DOT();
            DASH();
            break;
        case 'w':
        case 'W':
            DOT();
            DASH();
            DASH();
            break;
        case 'x':
        case 'X':
            DASH();
            DOT();
            DOT();
            DASH();
            break;
        case 'y':
        case 'Y':
            DASH();
            DOT();
            DASH();
            DASH();
            break;
        case 'z':
        case 'Z':
            DASH();
            DASH();
            DOT();
            DOT();
            break;
        case '1':
            DOT();
            DASH();
            DASH();
            DASH();
            DASH();
            break;
        case '2':
            DOT();
            DOT();
            DASH();
            DASH();
            DASH();
            break;
        case '3':
            DOT();
            DOT();
            DOT();
            DASH();
            DASH();
            break;
        case '4':
            DOT();
            DOT();
            DOT();
            DOT();
            DASH();
            break;
        case '5':
            DOT();
            DOT();
            DOT();
            DOT();
            DOT();
            break;
        case '6':
            DASH();
            DOT();
            DOT();
            DOT();
            DOT();
            break;
        case '7':
            DASH();
            DASH();
            DOT();
            DOT();
            DOT();
            break;
        case '8':
            DASH();
            DASH();
            DASH();
            DOT();
            DOT();
            break;
        case '9':
            DASH();
            DASH();
            DASH();
            DASH();
            DOT();
            break;
        case '0':
            DASH();
            DASH();
            DASH();
            DASH();
            DASH();
            break;
        case ' ':
        case '\n':
        case '\r':
            delay(WORD_DELAY);
            break;
        default:
            delay(LETTER_DELAY);
    }
}
