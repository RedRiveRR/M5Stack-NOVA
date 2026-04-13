# NOVA Firmware v1.1.0

## Technical Overview
NOVA v1.1.0 is an integrated firmware environment for M5Stack hardware platforms (ESP32 / ESP32-S3). It provides a framework for wireless signal research across 802.11 (WiFi), Bluetooth Low Energy (BLE), and Infrared (IR) protocols.

### Core Architecture
The system utilizes a modular handler architecture to manage hardware resources and radio stacks:
- **RF Layer:** Native BLE GAP advertising and raw 802.11 frame injection.
- **Protocol Suite:** Implementation of signal assessment tools including Beacon analysis, Deauthentication monitoring, and BLE GAP proximity testing.
- **Interface:** Functional display output managed via M5Unified / M5GFX.

## Integrated Modules

### Wireless Network (WiFi)
- **Beacon Frame Research:** Generation of synthetic SSID frames for signal saturation and protocol testing.
- **Deauthentication Tracking:** Real-time detection and logging of 802.11 management frame interference.
- **Captive Portal Engine:** Localized HTTP/DNS redirection for assessment purposes.

### Bluetooth Low Energy (BLE)
- **GAP Advertising Framework:** Implementation of proximity protocols for iOS (Nearby Action), Android (Fast Pair), and Windows (Swift Pair).
- **Proximity Analysis:** RSSI-based analysis and device identification.

### Infrared (IR)
- **Signal Processing:** Hardware-level signal capture, reproduction, and protocol-specific jamming routines.
- **Protocol Database:** Support for standard television and appliance control.

## Hardware Specifications
- **Supported Platforms:** M5StickC Plus2, M5Cardputer, M5Stamp S3.
- **Radio Components:** 2.4GHz internal RF, IR LED.
- **Input/Output:** TFT/LCD Display, IMU-based interaction.

## Installation

### Source Build
```bash
git clone https://github.com/RedRiveRR/M5Stack-NOVA.git
cd M5Stack-NOVA
pio run -e stick_c_plus2 -t upload
```

## Legal Disclaimer
This software is provided for cybersecurity research and educational purposes only. Unauthorized use on systems or networks without prior explicit consent is strictly prohibited. The user assumes all legal responsibility for the application of this tool.
