// Ports

int LED1 = 13;
int LED2 = 14;
int shortPulse = 500;
int longPulse = 1500;
int interval = 1000;


void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i < 3; i++) {
    digitalWrite(LED, HIGH);   
    delay(shortPulse);
    digitalWrite(LED, LOW);
    delay(interval);          
  }

  for (int i = 0; i < 3; i++) {
    digitalWrite(LED, HIGH);   
    delay(longPulse);
    digitalWrite(LED, LOW);
    delay(interval);           
  }

  delay(1000);
}
