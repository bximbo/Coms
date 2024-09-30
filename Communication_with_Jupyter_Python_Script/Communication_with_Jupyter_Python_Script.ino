//Communication_with_Jupyter_Python_Script
void setup() {
  Serial.begin(115200);  // Start the serial communication
  while (!Serial) {
    ; // Wait for the serial port to connect. Needed for native USB port only
  }
}

void loop() {
  if (Serial.available() > 0) {
    char receivedChar = Serial.read();  // Read the incoming byte

    // Echo the received character back to Python
    Serial.print("Received: ");
    Serial.println(receivedChar);

    // Add any specific actions you want to take based on the received character here
  }

  delay(100);  // Add a small delay to avoid overwhelming the serial communication
}
