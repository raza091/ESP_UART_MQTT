# ESP32 UART Receiver (MQTT bridge starter)

PlatformIO project for an ESP32 that listens on a hardware UART and forwards each received line to the USB serial console. It is the receiving half of a UART-to-MQTT bridge. The MQTT publish step is not implemented yet.

![Platform](https://img.shields.io/badge/Platform-ESP32-red)
![Framework](https://img.shields.io/badge/Framework-Arduino%20%2F%20PlatformIO-orange)
![Status](https://img.shields.io/badge/Status-work%20in%20progress-yellow)

## Current behaviour

- UART2 on GPIO16 (RX) and GPIO17 (TX), 9600 baud, 8N1
- Reads newline-terminated lines and prints them to the USB serial monitor

## Planned

- Wi-Fi connection and MQTT publish through the `PubSubClient` library (already listed in `platformio.ini`)
- Configurable broker, topic and credentials kept out of the repository

## Build

```bash
pio run -t upload
pio device monitor -b 9600
```

Wire the transmitting device's TX to GPIO16 and share ground.

## Author

Ali Raza Tariq. [LinkedIn](https://www.linkedin.com/in/ali-raza-embedded-fpga) · [GitHub](https://github.com/raza091)
