/*
 * Project: Traffic Light Control
 * Author: RGDEng
 */

//Variables Definition
const int greenLed = 3; 
const int yellowLed = 6;
const int redLed = 8;

void setup() {

  pinMode(greenLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
  pinMode(redLed, OUTPUT);
}

void loop() {


 digitalWrite(greenLed, HIGH);
  delay(3000);
  digitalWrite(greenLed, LOW):
  
 digitalWrite(yellowLed, HIGH);
  delay(500);
  digitalWrite(yellowLed, LOW):
  
   digitalWrite(redLed, HIGH);
  delay(3000);
  digitalWrite(redLed, LOW):
  
}
