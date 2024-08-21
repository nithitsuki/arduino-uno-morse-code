#define MORSE_PIN 13
#define UNIT_TIME 150 //Time of dot (dit) in ms
#define MULTIPLYING_FACTOR 3 //How many times longer than dit for dah (dash)
#define SPACE_TIME 420 // Time to wait for whitespaces in transmission
#define DASH_TIME UNIT_TIME*MULTIPLYING FACTOR
void dot(int n)
{
	//enable SOS if invalid input
	if(n < 1)
	{
		dot(3);
		dash(3);
		dot(3);
		return;
	}
	for(int i = 0; i < n; i++){
  		digitalWrite(MORSE_PIN, HIGH); 
  		delay(UNIT_TIME);            
  		digitalWrite(MORSE_PIN, LOW);  
  		delay(UNIT_TIME);           
	}
	
}

void dash(int n)
{
	if(n<1)
	{
		dot(3);
		dash(3);
		dot(3);
		return;
	}
	for(int i = 0; i < n; i++){
		digitalWrite(MORSE_PIN, HIGH);
		delay(DASH_TIME);            
  		digitalWrite(MORSE_PIN, LOW);  
  		delay(DASH_TIME);           
	}
}

void convert(String mCode)
{
  for (int i = 0; i < mCode.length() + 1; i++) {
    switch (mCode.charAt(i)) {
      case 'a':
        dot(1);
        dash(1);
        break;
      case 'b':
        dash(1);
        dot(2);
        dot(1);
        break;
      case 'c':
        dash(1);
        dot(1);
        dash(1);
        dot(1);
        break;
      case 'd':
        dash(1);
        dot(2);
        break;
      case 'e':
        dot(1);
        break;
      case 'f':
        dot(2);
        dash(1);
        dot(1);
        break;
      case 'g':
        dash(2);
        dot(1);
        break;
      case 'h':
        dot(2);
        dot(2);
        break;
      case 'i':
        dot(2);
        break;
      case 'j':
        dot(1);
        dash(2);
        dash(1);
        break;
      case 'k':
        dash(1);
        dot(1);
        dash(1);
        break;
      case 'l':
        dot(1);
        dash(1);
        dot(2);
        break;
      case 'm':
        dash(2);
        break;
      case 'n':
        dash(1);
        dot(1);
        break;
      case 'o':
        dash(2);
        dash(1);
        break;
      case 'p':
        dot(1);
        dash(2);
        dot(1);
        break;
      case 'q':
        dash(2);
        dot(1);
        dash(1);
        break;
      case 'r':
        dot(1);
        dash(1);
        dot(1);
        break;
      case 's':
        dot(2);
        dot(1);
        break;
      case 't':
        dash(1);
        break;
      case 'u':
        dot(2);
        dash(1);
        break;
      case 'v':
        dot(2);
        dot(1);
        dash(1);
        break;
      case 'w':
        dot(1);
        dash(2);
        break;
      case 'x':
        dash(1);
        dot(2);
        dash(1);
        break;
      case 'y':
        dash(1);
        dot(1);
        dash(2);
        break;
      case 'z':
        dash(2);
        dot(2);
        break;
      case ' ':
        delay(SPACE_TIME);
        break;
}

void setup()
{
	pinMode(MORSE_PIN, OUTPUT);
}


Void loop() 
{
	convert("Hello World")
}
