// Ports

int LED1 = 13;
int LED2 = 14;
int shortPulse = 500;
int longPulse = 1500;
int interval = 1000;


void setup() {
  // put your setup code here, to run once:
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED1,HIGH);
  digitalWrite(LED2,LOW);
  delay(interval);

  digitalWrite(LED1,LOW);
  digitalWrite(LED2,HIGH);
  delay(interval)

}
