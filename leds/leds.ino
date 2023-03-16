/*const int buttonPin = A1;     // the number of the pushbutton pin
const int ledPin1 =  12;      // the number of the LED pin
const int ledPin2 =  13;

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);      
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT_PULLUP);     
}

void loop(){
  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (digitalRead(buttonPin) == HIGH) {     
    // turn LED on:    
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, LOW);
  } 
  else {
    // turn LED off:
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, HIGH);
  }
}
*/


const int buttonPin = A1;
const int LED = 12;
const int LED2 = 13;

void setup() {
  // set Pin 3 to output
  pinMode(LED, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(buttonPin) == LOW) {     
    // turn LED on:    
    digitalWrite(LED2, HIGH);
  }
  else
    digitalWrite(LED2, LOW);
  digitalWrite(LED, HIGH);  // turn LED on (output 5V)
  delay(500);                         // wait one second
  digitalWrite(LED, LOW);   // turn LED off (output 0V)
  delay(500);                         // wait another second
}