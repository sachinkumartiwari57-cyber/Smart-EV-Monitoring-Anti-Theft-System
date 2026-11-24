# Smart EV Monitoring and Anti-Theft System using IoT

## 1. Abstract

Electric vehicles are becoming increasingly popular, creating a need for systems that monitor charging conditions, vehicle performance, and security. This project presents a Smart EV Monitoring and Anti-Theft System using an ESP32 microcontroller.

The prototype monitors simulated voltage, current, temperature, motor load, acceleration, and braking conditions. It provides charging warnings, driver behaviour alerts, and theft detection when security mode is enabled. A buzzer is used for alert indication, while an LCD and Serial Monitor display system information.

## 2. Introduction

Electric vehicles require monitoring of charging parameters and vehicle movement to improve safety and reliability. Abnormal charging conditions, excessive motor load, unsafe driving behaviour, and unauthorized vehicle movement can create safety and security concerns.

This project proposes an ESP32-based monitoring prototype using simulated sensor data and Wi-Fi connectivity.

## 3. Problem Statement

The absence of continuous monitoring can make it difficult to identify abnormal charging conditions, unsafe driving events, and unauthorized vehicle movement. A low-cost monitoring prototype is proposed to detect these conditions and provide alerts.

## 4. Objectives

- Monitor charging voltage, current, and temperature.
- Detect abnormal charging conditions.
- Analyze simulated driver behaviour.
- Detect sudden acceleration and braking.
- Monitor motor load.
- Detect suspected unauthorized vehicle movement.
- Activate buzzer alerts.
- Display status using LCD and Serial Monitor.
- Support local monitoring during Wi-Fi disconnection.

## 5. Proposed System

The ESP32 acts as the central controller. It reads simulated sensor parameters, processes the values, checks security mode, and provides alerts. The system uses a 16x2 LCD for local display and Serial Monitor for debugging and data observation.

## 6. Hardware Components

| Component | Purpose |
|---|---|
| ESP32 | Main controller |
| 16x2 I2C LCD | Local system display |
| Buzzer | Alert indication |
| Security switch | Enable/disable security mode |
| Brake switch | Simulate braking event |
| Simulated sensor data | Represent EV parameters |

## 7. Software Requirements

- Arduino C++
- ESP32 Arduino framework
- Wokwi simulator (planned testing)
- GitHub for source code hosting
- Wi-Fi connectivity

## 8. System Modules

### 8.1 Charging Monitoring
The system monitors simulated voltage, current, and temperature. Excessive current or temperature generates a warning.

### 8.2 Driver Behaviour Analysis
Acceleration, braking, and motor load values are analyzed to identify sudden acceleration, braking, or excessive motor load.

### 8.3 Anti-Theft Detection
When security mode is enabled, the system checks movement-related parameters. Suspicious movement activates the theft status and buzzer.

### 8.4 Local Monitoring
The LCD displays monitoring information. The Serial Monitor provides detailed data and alerts.

### 8.5 Wi-Fi Monitoring
The ESP32 attempts to connect to a Wi-Fi network. Local monitoring is intended to continue when Wi-Fi is unavailable.

## 9. Working Methodology

1. Initialize ESP32, LCD, buzzer, and switches.
2. Attempt Wi-Fi connection.
3. Generate simulated sensor readings.
4. Monitor charging parameters.
5. Analyze driver behaviour.
6. Check security mode.
7. Detect suspected theft.
8. Activate buzzer when required.
9. Display monitoring data locally.

## 10. Expected Outcomes

- Monitoring of simulated EV parameters.
- Charging-condition warning generation.
- Driver behaviour event detection.
- Security-mode-based theft alert.
- Local LCD and Serial output.
- Basic Wi-Fi connectivity status.

## 11. Limitations

The current prototype uses simulated sensor readings. Real sensors, calibrated movement detection, verified simulation, and cloud dashboard integration are not yet completed. The current theft logic is demonstrative and requires improvement before real-world use.

## 12. Future Scope

- Blinker IoT dashboard integration.
- GPS vehicle tracking.
- Real current and voltage sensors.
- Temperature sensor integration.
- Accelerometer and gyroscope.
- Mobile push notifications.
- Battery health monitoring.
- Cloud data logging.

## 13. Conclusion

The Smart EV Monitoring and Anti-Theft System demonstrates a prototype concept for monitoring electric vehicle charging parameters, driver behaviour, and security using ESP32. The project can be further developed using real sensors, GPS tracking, and IoT dashboard services.

## 14. Project Status

Prototype and documentation development. Sensor data is currently simulated; hardware implementation and complete dashboard integration are future work.
