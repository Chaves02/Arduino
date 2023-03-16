unsigned long initialTimeLED1 = 0;
unsigned long initialTimeLED2 = 0;

long intervalLED1 = 1000; // 1 second for SM1
long intervalLED2 = 750; // 0.75 seconds for SM2

const int ledPin1 = 13;
const int ledPin2 = 12;

int stateLED1 = HIGH;
int stateLED2 = HIGH;

// initialization
void setup() {
 pinMode (ledPin1, OUTPUT); // set the digitial Pin 6 as output
 pinMode (ledPin2, OUTPUT); // set the digitial Pin 7 as output
 initialTimeLED1 = millis();
 initialTimeLED2 = millis();
}

// run
void loop() {
  //State machine 1
  if ((millis() - initialTimeLED1) < intervalLED1)
  {
    digitalWrite(ledPin1, stateLED1);
  }
  else
  {
    stateLED1 = !stateLED1;
    initialTimeLED1 = millis();
  }
  //State machine 2
  if ((millis() - initialTimeLED2) < intervalLED2)
  {
    digitalWrite(ledPin2, stateLED2);
  }
  else
  {
    stateLED2 = !stateLED2;
    initialTimeLED2 = millis();
  }
}