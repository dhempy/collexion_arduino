/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the Uno and
  Leonardo, it is attached to digital pin 13. If you're unsure what
  pin the on-board LED is connected to on your Arduino model, check
  the documentation at http://www.arduino.cc

  This example code is in the public domain.

  modified 8 May 2014
  by Scott Fitzgerald
 */
int buttonInput = 6;
int buttonState;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(buttonInput, INPUT); 
  
  digitalWrite(buttonInput, HIGH);
}

// the loop function runs over and over again forever
void loop() {
 buttonState = digitalRead(buttonInput);
    if (buttonState == HIGH) {
        digitalWrite(2, LOW);
    } else {
        digitalWrite(2, HIGH);
    }
  
  
}
