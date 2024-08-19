// Ports
int LEDPins[4] = {13, 5, 4, 12}; // LED pin numbers
int interval = 500; // Delay interval between LED patterns

void setup() {
  // Initialize serial communication
  Serial.begin(9600);

  // Set LED pins as output
  for (int i = 0; i < 4; i++) {
    pinMode(LEDPins[i], OUTPUT);
  }
}

void loop() {
  // Generate binary numbers using nested loops
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      for (int k = 0; k < 2; k++) {
        for (int l = 0; l < 2; l++) {
          // Set LED states based on binary values
          digitalWrite(LEDPins[0], i);
          digitalWrite(LEDPins[1], j);
          digitalWrite(LEDPins[2], k);
          digitalWrite(LEDPins[3], l);
          
          // Print the binary number to the serial monitor
          Serial.print(i);
          Serial.print(j);
          Serial.print(k);
          Serial.println(l);
          
          // Wait before the next iteration
          delay(interval);
        }
      }
    }
  }
}
