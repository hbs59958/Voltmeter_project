// Project: Arduino Voltmeter
// Author: Helina Semu
// Description: Reads an analog voltage from pin A1, converts it to a 0-5V range,
// and displays the value on a 16x2 LCD in real-time.

#include <LiquidCrystal.h>

// Initialize the LCD
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

// Define the analog pin (A1) for reading voltage
int analogPin = A1;

void setup() {
  // Initialize the LCD
  lcd.begin(16, 2);
}

void loop() {
  // Read the analog value from the analog pin
  int v = analogRead(analogPin);
  
  // Convert the analog value to voltage (5.0 is the reference voltage)
  float voltage = v * (5.0 / 1023.0);
  
  // Clear the LCD to update the display
  lcd.clear();
  
  // Display "voltage=" on the LCD
  lcd.setCursor(0, 0); // Set cursor to the first row
  lcd.print("voltage=");

  // Display the voltage value
  lcd.setCursor(9, 0); // Move cursor to the right to display the value
  lcd.print(voltage);
  
  // Delay for 500ms before updating the value again
  delay(500);
}
