#include <WiFi.h>
#include <PubSubClient.h>

#define RXD2 16
#define TXD2 17
HardwareSerial MySerial(2); // Use UART2


void setup() {
  Serial.begin(9600);
  MySerial.begin(9600, SERIAL_8N1, RXD2, TXD2);
  Serial.println("ESP32 ready to receive...");
}

void loop() {
  if (MySerial.available()) {
    String data = MySerial.readStringUntil('\n');
    Serial.print("Received: \n");
    Serial.println(data);
  }
}