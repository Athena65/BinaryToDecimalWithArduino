# **BinaryToDecimalWithArduino**

This Arduino-based project reads input from buttons, representing a 4-bit binary number, and converts it to its decimal and hexadecimal equivalents, displaying the results on an LCD monitor.

---

## **Features**

- **Binary Input via Buttons**: Four buttons represent the 4-bit binary input (bits 0 to 3).
- **Real-Time Conversion**: As the binary input changes, the corresponding decimal and hexadecimal values are calculated in real-time.
- **LCD Display**: The binary, decimal, and hexadecimal values are displayed on a 16x2 LCD screen for easy monitoring.

---

## **Hardware Requirements**

- Arduino Uno or compatible board
- 4 push buttons
- 16x2 LCD display
- 10kΩ resistors (4x for pull-down or pull-up configuration)
- Breadboard and connecting wires

---

## **Software Requirements**

- Arduino IDE
- LiquidCrystal library (usually included with the Arduino IDE)

---

## **Circuit Diagram**

Connect the components as follows:

- **Push Buttons**:
  - Connect one terminal of each button to digital pins 2, 3, 4, and 5 on the Arduino.
  - Connect the other terminal of each button to ground.
  - Use 10kΩ pull-up resistors between each digital pin (2-5) and 5V to ensure a default HIGH state.

- **LCD Display**:
  - Connect RS to digital pin 7.
  - Connect E to digital pin 8.
  - Connect D4 to digital pin 9.
  - Connect D5 to digital pin 10.
  - Connect D6 to digital pin 11.
  - Connect D7 to digital pin 12.
  - Connect VSS to ground and VDD to 5V.
  - Connect RW to ground.
  - Connect a 10kΩ potentiometer between 5V and ground, with the wiper connected to V0 for contrast adjustment.

---

## **Setup Instructions**

1. **Clone the Repository**:
   ```bash
   git clone https://github.com/Athena65/BinaryToDecimalWithArduino.git
   cd BinaryToDecimalWithArduino
   ```

2. **Open the Sketch**:
   Launch the Arduino IDE and open the `GSPBinaryToDecimal.ino` file located in the repository.

3. **Upload the Sketch**:
   - Connect your Arduino board to your computer via USB.
   - Select the appropriate board and port from the `Tools` menu.
   - Click the upload button to compile and upload the code to the Arduino.

---

## **Usage**

1. **Power the Arduino**:
   Once the code is uploaded, the Arduino will initialize, and the LCD will display the initial values.

2. **Input Binary Values**:
   - Press the buttons corresponding to each bit to set them to HIGH (1) or LOW (0).
   - The LCD will update in real-time to show the current 4-bit binary number and its decimal and hexadecimal equivalents.

---

## **Code Overview**

The sketch reads the state of four digital pins corresponding to the buttons. It constructs a 4-bit binary number from these inputs, converts it to decimal and hexadecimal formats, and displays the results on the LCD. Debouncing is implemented to ensure accurate button reads.

---

## **Contributing**

Contributions are welcome! If you have suggestions for improvements or new features, feel free to open an issue or submit a pull request.
