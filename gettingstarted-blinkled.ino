// ------------
// Blink an LED
// ------------


int led1 = D7; 

// Having declared these variables, let's move on to the setup function.
// The setup function is a standard part of any microcontroller program.
// It runs only once when the device boots up or is reset.

void setup() {

	pinMode(led1, OUTPUT);

}


void loop() {
    
    //now according to international standards of morse code
    //dash represents 3 units and dot represents 1 unit
    //delay between components of a letter is 1 unit and,
    //delay between letters is 3 units.
    //here, I have taken 1 unit = 500ms.0

// Letter M
	digitalWrite(led1, HIGH);
	delay(1500);

	digitalWrite(led1, LOW);
	delay(500);
	
	digitalWrite(led1, HIGH);
	delay(1500);
	
	//Now 3unit delay between letters
	
	digitalWrite(led1, LOW);
	delay(1500);
	
	//letter A
	
	digitalWrite(led1, HIGH);
	delay(500);
	
	digitalWrite(led1, LOW);
	delay(500);
	
	digitalWrite(led1, HIGH);
	delay(1500);
	
	//Now 3unit delay between letters
	
	digitalWrite(led1, LOW);
	delay(1500);
	
	//LETTER N
	
	digitalWrite(led1, HIGH);
	delay(1500);
	
	digitalWrite(led1, LOW);
	delay(500);
	
	digitalWrite(led1, HIGH);
	delay(500);
	
	//3 UNIT DELAY BETWEEN LETTERS
	
	digitalWrite(led1, LOW);
	delay(1500);
	
	//LETTER M
	digitalWrite(led1, HIGH);
	delay(1500);

	digitalWrite(led1, LOW);
	delay(500);
	
	digitalWrite(led1, HIGH);
	delay(1500);
	
	//3 UNIT DELAY BETWEEN LETTERS
	
	digitalWrite(led1, LOW);
	delay(1500);
	
	//LETTER E
	digitalWrite(led1, HIGH);
	delay(500);
	
	//3 UNIT DELAY BETWEEN LETTERS
	
	digitalWrite(led1, LOW);
	delay(1500);
	
	//LETTER E
	digitalWrite(led1, HIGH);
	delay(500);
	
	//3 UNIT DELAY BETWEEN LETTERS
	
	digitalWrite(led1, LOW);
	delay(1500);
	
	//LETTER T
	
	digitalWrite(led1, HIGH);
	delay(1500);
	
	

}
