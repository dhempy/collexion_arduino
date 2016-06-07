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
int buttonInputred = 6;
int buttonInputblue = 7;
int buttonInputyellow = 8;
int buttonInputgreen = 9;
int buttonStatered;
int buttonStateblue;
int buttonStateyellow;
int buttonStategreen;
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(buttonInputred, INPUT); 
  pinMode(buttonInputblue, INPUT);
  pinMode(buttonInputyellow, INPUT);
  pinMode(buttonInputgreen, INPUT);
  digitalWrite(buttonInputred, HIGH);
  digitalWrite(buttonInputblue, HIGH);
    digitalWrite(buttonInputyellow, HIGH);
      digitalWrite(buttonInputgreen, HIGH);
}

// the loop function runs over and over again forever
void loop() {
 buttonStatered = digitalRead(buttonInputred);
     buttonStateblue = digitalRead(buttonInputblue);
      buttonStateyellow = digitalRead(buttonInputyellow);
       buttonStategreen = digitalRead(buttonInputgreen);
       
    if (buttonStatered == HIGH) {
        digitalWrite(2, LOW);
    } else {
        digitalWrite(2, HIGH);
}
     if (buttonStateblue == HIGH) {
        digitalWrite(5, LOW);
    } else {
        digitalWrite(5, HIGH);
    }
    
     if (buttonStateyellow == HIGH) {
        digitalWrite(4, LOW);
    } else {
        digitalWrite(4, HIGH);
    }
     
     if (buttonStategreen == HIGH) {
        digitalWrite(3, LOW);
    } else {
        digitalWrite(3, HIGH);
    }
}
  
  

