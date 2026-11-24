# Smart EV System Simulation

## Overview

This directory contains documentation related to the simulation of the Smart EV Monitoring and Anti-Theft System using ESP32.

The prototype is intended to be simulated using Wokwi, an online electronics simulator.

## Planned Simulation Components

- ESP32 DevKit
- 16x2 I2C LCD
- Buzzer
- Security Mode Switch
- Brake Switch
- Simulated EV sensor parameters

## Simulation Objectives

The simulation is intended to demonstrate:

1. ESP32 initialization.
2. LCD display operation.
3. Simulated charging voltage and current monitoring.
4. Temperature monitoring.
5. Driver behaviour alert generation.
6. Security mode operation.
7. Theft alert and buzzer operation.
8. Wi-Fi status monitoring.

## Sensor Data

The current source code uses simulated/random values for the following parameters:

| Parameter | Unit |
|---|---|
| Voltage | V |
| Current | A |
| Temperature | °C |
| Acceleration | m/s² |
| Motor Load | % |

## Wokwi Simulator

Wokwi can be used to create and test the ESP32 circuit online.

Website: https://wokwi.com/

## Simulation Status

Simulation setup and testing are pending.

A verified Wokwi simulation link and circuit diagram will be added after the simulation is created and tested.

## Future Simulation Improvements

- Add complete ESP32 circuit.
- Connect LCD and buzzer.
- Add switches for security and braking.
- Implement realistic sensor input controls.
- Test abnormal charging conditions.
- Test theft detection.
- Integrate IoT dashboard.
