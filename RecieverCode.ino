#include <SoftwareSerial.h>

SoftwareSerial bluetooth(2, 3);  // RX, TX pins for Bluetooth module

void setup() {
  // Set up Bluetooth communication
  bluetooth.begin(9600);
}

void loop() {
  // Collect and send movement commands to other robots
  String command = "";  // Placeholder for movement command
  
  // Example: Sending "FORWARD" command
  command = "FORWARD";
  
  bluetooth.println(command);
  
  // Delay for a short period before repeating the loop
  delay(1000);
}