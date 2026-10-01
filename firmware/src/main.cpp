#include <Arduino.h>

void setup() {
    Serial.begin(115200);

    delay(1000);

    Serial.println();
    Serial.println("================================");
    Serial.println(" Intelligent IoT Smart Parking");
    Serial.println(" ESP32 Firmware");
    Serial.println("================================");
    Serial.println("System initialized successfully.");
}

void loop() {
    Serial.println("Smart parking system is running...");

    delay(2000);
}