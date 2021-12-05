/* The circuit:
 * LCD RS pin to digital pin 12
 * LCD Enable pin to digital pin 11
 * LCD D4 pin to digital pin 5
 * LCD D5 pin to digital pin 4
 * LCD D6 pin to digital pin 3
 * LCD D7 pin to digital pin 2
 * LCD R/W pin to ground
 * LCD VSS pin to ground
 * LCD VCC pin to 5V
 * 10K resistor:
 * ends to +5V and ground
 * wiper to LCD VO pin (pin 3)
 */

// include the library and servo code:
#include <LiquidCrystal.h>
#include <Servo.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
const int SERVO = 9; //Servo on Pin 9
const int sensorPin = 7;
const int ledPin = 13;

Servo myServo;

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  pinMode(ledPin, OUTPUT);
  pinMode(sensorPin, INPUT);
  
  // Configuring the Servo
  myServo.attach(SERVO);
  myServo.write(90);
}

void loop() {
  // set the cursor to column 0, line 0
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 0);
  int sensorState = digitalRead(sensorPin);
  
  if (sensorState == HIGH) {
  	// Rotating the servo 90 degrees
    myServo.write(0);
    digitalWrite(ledPin, HIGH);
  	lcd.clear();
  	lcd.print("Dispensing for");
    lcd.setCursor(0, 1);
    lcd.print("3 seconds.");
  	delay(3000);
    // Rotating back 90 degrees
    myServo.write(90);
    digitalWrite(ledPin, LOW);
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Goodbye");
    delay(2000);
    lcd.clear();
  }
  else {
    lcd.print("No hand detected");
  }
  
  delay(100);
  
}
 
