// Variable for pin numbers, increases during loop
int pinCount = 0;

void setup()
{
  //Turning on all pins
  //pinMode(LED_BUILTIN, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);

}

void loop()
{

  switch (pinCount)
  {
    case 0:
      digitalWrite(2, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(8, LOW);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      // Pause for 1 second (1000 m.s) before increment
      delay (1000);
      pinCount++;
      break;
    
    case 1:
      digitalWrite(4, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(2, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      // Pause before increment
      delay (1000);
      pinCount++;
      break;
    
    case 2:
      digitalWrite(8, HIGH);
      digitalWrite(2, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(7, LOW);
      digitalWrite(4, LOW);
      // Pause before increment
      delay (1000);
      pinCount++;
      break;
    
    case 3:
      digitalWrite(8, HIGH);
      digitalWrite(2, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(7, LOW);
      digitalWrite(6, LOW);
      // Pause before increment
      delay (1000);
      pinCount++;
      break;
    
    case 4:
      digitalWrite(8, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(2, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      // Pause before increment
      delay (1000);
      pinCount++;
      break;

    case 5: // outputs the number 5
      digitalWrite(8, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(2, HIGH);
      digitalWrite(3, LOW);
      digitalWrite(6, LOW);
      // Pause before increment
      delay (1000);
      pinCount++;
      break;

    case 6:
      digitalWrite(8, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(2, HIGH);
      digitalWrite(3, LOW);
      digitalWrite(6, HIGH);
      // Pause before increment
      delay (1000);
      pinCount++;
      break;

    case 7:
      digitalWrite(2, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      // Pause before increment
      delay (1000);
      pinCount++;
      break;

    case 8:
      digitalWrite(2, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(8, HIGH);
      // Pause before increment
      delay (1000);
      pinCount++;
      break;

    case 9:
      digitalWrite(2, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(6, LOW);
      // Pause before increment
      delay (1000);
      pinCount++;
      break;
   
    
    
    // Letters a - g
    case 10:
      digitalWrite(8, HIGH);
      digitalWrite(2, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(5, LOW);
      // Pause before increment
      delay (1000);
      pinCount++;
      break;
    
    case 11: //letter b
      digitalWrite(8, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      // Pause before increment
      delay (1000);
      pinCount++;
      break;
    
    case 12: //letter c
      digitalWrite(2, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(4, LOW);
      digitalWrite(3, LOW);
      digitalWrite(8, LOW);
      // Pause before increment
      delay (1000);
      pinCount++;
      break;
    
    case 13: // letter d
      digitalWrite(8, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(2, LOW);
      digitalWrite(7, LOW);
      // Pause before increment
      delay (1000);
      pinCount++;
      break;

    case 14: // outputs letter e
      digitalWrite(2, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(4, LOW);
      digitalWrite(3, LOW);
      // Pause before increment
      delay (1000);
      pinCount++;
      break;

    case 15: // letter f
      digitalWrite(2, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(5, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      // Pause before increment
      delay (1000);
      pinCount++;
      break;

    case 16: //letter g
      digitalWrite(2, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(6, LOW);
      // Pause before increment
      delay (1000);

      // Resetting variable to restart loop
      pinCount = 0;
      break;
    // End of letters section
    

  } //switch end
}

// Hello there
