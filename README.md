# Voltmeter Project

This project is a simple voltmeter using an Arduino UNO and a 16x2 LCD to measure and display analog voltage values in real-time.

## Project Overview

The Arduino reads an analog voltage from a specified pin (A1) and converts it to a range of 0-5V. The voltage is then displayed on a 16x2 LCD for easy monitoring. 

### Features:
- **Real-time Voltage Display:** Shows live voltage readings on the LCD.
- **Simple and Efficient:** Basic setup for quick voltage monitoring using an Arduino.

## Project Structure

The project includes:
- `Voltmeter_project.ino` - Arduino sketch to read and display the voltage.
- `Circuit_diagram.png` - Circuit diagram for wiring the components.
- `Setup_picture.png` - Picture of the actual hardware setup.

## Hardware Requirements

- Arduino UNO (or any compatible Arduino board)
- 16x2 LCD display
- Jumper wires
- Breadboard
- Potentiometer (optional, for contrast control)
- USB cable (for connecting Arduino to your computer)

## Software Requirements

- [Arduino IDE](https://www.arduino.cc/en/software)

## Setup Instructions

1. **Hardware Setup:**
   - Follow the provided circuit diagram to connect the LCD to the Arduino.
   - Use the setup picture for guidance on how the final hardware arrangement should look.

2. **Arduino Code:**
   - Open the `Voltmeter_project.ino` file in the Arduino IDE.
   - Select the correct board and port.
   - Upload the code to your Arduino.

3. **Run the System:**
   - Once the code is uploaded, the LCD will display real-time voltage readings from the analog pin A1.

## Future Improvements

- Expand the voltage range for higher voltage monitoring.
- Add a calibration feature for more accurate readings.

## Author

**Helina Semu**.

