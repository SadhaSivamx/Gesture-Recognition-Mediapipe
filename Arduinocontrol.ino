int ledPin = 13;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    char data = Serial.read();
    if (data == '1') {
      digitalWrite(ledPin, HIGH);  // Turn on the LED  // Turn off the LED
    }
    if (data == '0') {
      digitalWrite(ledPin, LOW);  // Turn on the LED  // Turn off the LED
    }
  }
}
