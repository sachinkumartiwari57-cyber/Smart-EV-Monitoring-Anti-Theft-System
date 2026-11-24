# 🚗 Smart EV Monitoring and Anti-Theft System using IoT

## 📌 Project Overview

The Smart EV Monitoring and Anti-Theft System is an IoT-based project designed to monitor electric vehicle charging conditions, analyze driver behavior, and detect unauthorized vehicle movement.

The system uses an ESP32 microcontroller with simulated sensor inputs and Wi-Fi connectivity. It provides local monitoring through an LCD display and Serial Monitor.

## 🎯 Project Objectives

- Monitor EV charging voltage, current, and temperature.
- Detect abnormal charging conditions.
- Analyze driver behavior.
- Detect sudden acceleration and braking.
- Monitor motor load.
- Detect unauthorized vehicle movement.
- Activate a buzzer during theft detection.
- Provide local monitoring during Wi-Fi disconnection.

## ⚙️ Main Features

### 1. EV Charging Monitoring
Monitors voltage, current, and temperature and generates warnings during abnormal charging conditions.

### 2. Driver Behaviour Analysis
Detects simulated sudden acceleration, braking events, and excessive motor load.

### 3. Anti-Theft Protection
Security mode detects suspected unauthorized movement and activates a theft alert with a buzzer.

### 4. Local Monitoring
Displays vehicle information on a 16x2 LCD and Serial Monitor.

### 5. Wi-Fi Connectivity
The ESP32 attempts to connect to Wi-Fi. Local monitoring is designed to continue even if Wi-Fi is unavailable.

## 🧰 Components Used

- ESP32 Development Board
- 16x2 I2C LCD Display
- Buzzer
- Security Mode Switch
- Brake Switch
- Simulated voltage input
- Simulated current input
- Simulated temperature input
- Simulated acceleration input
- Simulated motor load input

## 💻 Software & Technologies

- Arduino C++
- ESP32
- Wokwi Simulator
- GitHub
- Wi-Fi / IoT

## 📂 Repository Structure

```text
Smart-EV-Monitoring-and-Anti-Theft-System/
├── README.md
├── src/
│   └── smart_ev_monitor.ino
├── docs/
│   ├── project_report.md
│   └── working_principle.md
├── simulation/
│   └── README.md
└── LICENSE
