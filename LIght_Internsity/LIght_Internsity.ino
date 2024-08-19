// Ports
int LEDPins = 5; // LED pin number
int interval = 50; // Delay interval between LED patterns
int intensity = 255; // LED brightness

void setup() {
  // Initialize serial communication
  pinMode(LEDPins, OUTPUT); // Set LED pin as output
}

void loop() {
  // Fade LED in
  for (int i = 0; i <= intensity; i++) {
    analogWrite(LEDPins, i); // Gradually increase LED brightness
    delay(interval); // Wait for 50 milliseconds
  }

  // Fade LED out
  for (int i = intensity; i >= 0; i--) {
    analogWrite(LEDPins, i); // Gradually decrease LED brightness
    delay(interval); // Wait for 50 milliseconds
  }

  // Add a delay before repeating the pattern
  delay(interval); // Delay between patterns
}