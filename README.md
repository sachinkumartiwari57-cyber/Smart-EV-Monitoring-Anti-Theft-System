
# Smart EV Monitoring and Anti-Theft System using IoT

An ESP32-based IoT project designed to monitor electric vehicle charging conditions, analyze driver behaviour, and detect unauthorized vehicle movement.

## Project Overview

This project aims to improve electric vehicle safety, monitoring, and security using an ESP32 microcontroller.

The system collects simulated sensor data, monitors vehicle parameters, identifies abnormal conditions, and generates alerts.

Wi-Fi connectivity is planned for remote monitoring through an IoT dashboard. Local monitoring through an LCD and Serial Monitor is also supported by the planned architecture.

## Project Objectives

- Monitor EV charging voltage, current, and temperature.
- Detect abnormal charging conditions.
- Identify sudden acceleration and braking.
- Monitor excessive motor load.
- Detect unauthorized vehicle movement.
- Generate theft alerts using a buzzer.
- Enable remote monitoring through an IoT dashboard.
- Maintain local monitoring during Wi-Fi disconnection.

## Main Features

### 1. EV Charging Monitoring
- Voltage monitoring.
- Current monitoring.
- Temperature monitoring.
- Overcurrent warning.
- Abnormal charging detection.

### 2. Driver Behaviour Analysis
- Sudden acceleration detection.
- Sudden braking detection.
- Motor load monitoring.
- Driver behaviour alerts.

### 3. Anti-Theft Protection
- Vehicle security mode.
- Unauthorized movement detection.
- Theft alert generation.
- Buzzer-based alarm.

### 4. IoT Monitoring
- ESP32 Wi-Fi connectivity.
- Remote dashboard monitoring.
- Sensor data visualization.
- Alert notifications (planned).

## System Architecture

```text
     Simulated Sensors
             |
             v
       ESP32 Controller
             |
     +-------+-------+
     |       |       |
     v       v       v
    LCD   Buzzer   Serial
             |
             v
       Wi-Fi Connection
             |
             v
        IoT Dashboard
```

## Technologies Used

| Technology | Purpose |
|---|---|
| ESP32 | Main microcontroller |
| Arduino C/C++ | Embedded programming |
| Wokwi | Circuit simulation |
| Wi-Fi | Wireless communication |
| LCD | Local monitoring |
| Buzzer | Security alerts |
| Simulated Sensors | EV parameter monitoring |
| Blynk IoT | Planned dashboard integration |

## Repository Structure

```text
Smart-EV-Monitoring-Anti-Theft-System/
├── README.md
├── LICENSE
├── docs/
│   ├── project_report.md
│   └── working_principle.md
├── simulation/
│   └── README.md
└── src/
    ├── README.md
    └── smart_ev_monitor.ino
```

## Getting Started

### Requirements

- ESP32 development board or Wokwi ESP32 simulation.
- Arduino IDE or compatible environment.
- Wokwi simulator.
- Required sensors and electronic components.
- Internet connection for IoT functionality.

### Initial Setup

1. Download or clone this repository.
2. Open `src/smart_ev_monitor.ino`.
3. Select the appropriate ESP32 board.
4. Install the required libraries after checking the source code.
5. Configure the circuit and sensor connections.
6. Upload the program or run the Wokwi simulation.

Detailed wiring and library instructions will be added after implementation.

## Simulation Status

**Status: Under Development**

The Wokwi circuit and simulation have not yet been verified.

The simulation link and circuit screenshots will be added after successful testing.

## Project Documentation

- [Project Report](docs/project_report.md)
- [Working Principle](docs/working_principle.md)
- [Simulation Documentation](simulation/README.md)
- [Source Code](src/smart_ev_monitor.ino)

## Testing Plan

- EV voltage, current, and temperature monitoring.
- Overcurrent and temperature warnings.
- Sudden acceleration and braking detection.
- Excessive motor load detection.
- Security mode activation.
- Unauthorized movement detection.
- Buzzer alarm activation.
- Local monitoring without Wi-Fi.
- IoT dashboard communication.

## Future Scope

- Real-time EV battery monitoring.
- GPS-based vehicle tracking.
- Mobile application integration.
- Cloud-based vehicle data storage.
- Advanced driver behaviour analysis.
- Improved anti-theft protection.

## Project Status

**Currently in Development**

Features will be marked complete only after successful implementation and testing.

## Author

**Sachin Tiwari**

B.Tech – Electronics and Communication Engineering

GitHub: [@sachinkumartiwari57-cyber](https://github.com/sachinkumartiwari57-cyber)

---

If you find this project interesting, feel free to explore the repository and follow its development.
