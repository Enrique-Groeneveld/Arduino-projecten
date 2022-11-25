/*
  DigitalReadSerial

  Reads a digital input on pin 2, prints the result to the Serial Monitor

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/DigitalReadSerial
*/

// digital pin 2 has a pushbutton attached to it. Give it a name:
const int button = A5;

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  pinMode(button, INPUT_PULLUP);
  Serial.begin(9600);
  // make the pushbutton's pin an input:
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input pin:
  if (digitalRead(button) == LOW) {
    while(digitalRead(button) == LOW) { }
    delay(100);
    Serial.println("knop ingedrukt");
  }
}
