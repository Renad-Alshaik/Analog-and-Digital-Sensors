// Define pin numbers
const int pirPin = 2;  // PIR sensor output pin
const int ledPin = 13; // LED pin

// Variable to store PIR sensor state
int pirState = LOW;  // Start with no motion detected
int val = 0;          // Variable to store the PIR sensor output

void setup() {
  // Start the serial communication (optional, for debugging)
  Serial.begin(9600);

  // Set the PIR sensor pin as input
  pinMode(pirPin, INPUT);

  // Set the LED pin as output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Read the value from the PIR sensor
  val = digitalRead(pirPin);

  // Check if the PIR sensor is HIGH (motion detected)
  if (val == HIGH) {
    // Motion detected, turn LED on
    digitalWrite(ledPin, HIGH);

    // Print message to the serial monitor
    if (pirState == LOW) {
      Serial.println("Motion detected!");
      pirState = HIGH;  // Update state to "motion detected"
    }
  } else {
    // No motion detected, turn LED off
    digitalWrite(ledPin, LOW);

    // Print message to the serial monitor
    if (pirState == HIGH) {
      Serial.println("Motion stopped!");
      pirState = LOW;  // Update state to "motion stopped"
    }
  }

  // Wait a bit before checking again
  delay(100);
}
