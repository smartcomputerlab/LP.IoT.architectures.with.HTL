#include "Wire.h"

void setup() {
  Serial.begin(9600);
  Wire.begin(21,22);   // SDA, SCL
}

void loop() {
  byte error, address;
  int nDevices = 0;
  delay(5000);
  Serial.println("Scanning for I2C devices ...");
  for(address = 0x01; address < 0x7f; address++)
  {
    Wire...(..);
    error = Wire.endTransmission();
    if (error == 0){
      Serial.printf("I2C device found at address 0x%02X\n", address);
      nDevices++;
    }
  }
  if (nDevices == 0){
    Serial.println("No I2C devices found");
  }
}
