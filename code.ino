int pirPin = 2;         // PIR sensor OUT pin
int ledPin = 13;        // LED pin

void setup() {
  pinMode(pirPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
  Serial.println("Security System Initialized");
}

void loop() {
  int motionState = digitalRead(pirPin);
  
  if (motionState == HIGH) {
    digitalWrite(ledPin, HIGH);
    Serial.println("Motion Detected! Sending Alert...");
    delay(1000);  // Simulate delay for alert
  } else {
    digitalWrite(ledPin, LOW);
  }

  delay(500);
}