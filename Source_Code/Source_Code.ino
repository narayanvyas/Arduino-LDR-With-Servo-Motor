/*  LDR With Servo Motor
 * 
 *  GitHub URL - https://github.com/narayanvyas/Arduino-LDR-With-Servo-Motor
 * 
 *  Developed By Web Dev Fusion
 *  URL - https://www.webdevfusion.com
 *  
 *  Components
 *  ----------
 *   - Arduino Uno
 *   - LDR
 *   - Jumper Wires
 *   - Breadboard / PCB
 *   - Servo Motor
 *   - 10k Ohm Resistors
 *  
 *  Libraries
 *  ---------
 *  None
 *  
 */

#include<Servo.h>  //Servo Header Files

Servo myservo;  //Creating Servo Object

void setup() {
  myservo.attach(9);  //Attaching Servo to Pin 9
}

void loop() {
  int lightValue = analogRead(A0);  //Reading LDR Value
  lightValue = map(lightValue, 0, 1023, 0, 180);  // Mapping LDR Value to Servo Value (0-180)
  myservo.write(lightValue);
  delay(100);
}
