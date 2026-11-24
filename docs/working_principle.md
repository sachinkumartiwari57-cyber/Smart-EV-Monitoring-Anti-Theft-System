# Working Principle
## Smart EV Monitoring and Anti-Theft System using IoT

## 1. Introduction

The Smart EV Monitoring and Anti-Theft System uses an ESP32 microcontroller to monitor simulated electric vehicle parameters, analyze driving behaviour, and detect suspicious vehicle movement.

The ESP32 acts as the central processing unit and performs monitoring, alert generation, and local display operations.

## 2. System Initialization

When the system starts:

- ESP32 initializes its GPIO pins.
- LCD display is initialized.
- Buzzer is configured.
- Security and brake switches are configured.
- Wi-Fi connection is attempted.
- Monitoring begins.

## 3. EV Charging Monitoring

The system generates simulated values for:

- Charging voltage
- Charging current
- Battery/charging temperature

These parameters are continuously monitored. If current or temperature exceeds the defined threshold, a warning is displayed on the Serial Monitor.

### Example Thresholds

| Parameter | Warning Threshold |
|---|---|
| Charging Current | Above 10 A |
| Temperature | Above 40°C |

These thresholds are demonstration values and require calibration for actual EV systems.

## 4. Driver Behaviour Analysis

The system analyzes simulated acceleration, braking, and motor load.

### Sudden Acceleration
If acceleration exceeds the defined threshold, a sudden acceleration warning is generated.

### Sudden Braking
The brake switch is used to simulate braking events.

### Excessive Motor Load
If motor load exceeds the defined limit, a warning is generated.

## 5. Anti-Theft System

The security switch activates the anti-theft mode.

When security mode is ON:

1. The ESP32 checks movement-related simulated parameters.
2. Suspicious acceleration or excessive motor load may indicate unauthorized movement.
3. Theft status is activated.
4. The buzzer turns ON.
5. LCD displays a theft alert.

The current logic is a basic simulation demonstration and may generate false alerts because the sensor readings are randomized.

## 6. LCD Monitoring

The 16x2 LCD displays:

- Voltage
- Current
- Temperature
- Wi-Fi status
- Theft alert status

During theft detection, the LCD displays an alert message.

## 7. Serial Monitor

The Serial Monitor provides detailed information including:

- Voltage
- Current
- Temperature
- Motor load
- Acceleration
- Security mode
- Wi-Fi status
- Theft status
- Charging warnings
- Driver behaviour alerts

## 8. Wi-Fi Connectivity

The ESP32 attempts to connect to the configured Wi-Fi network.

If Wi-Fi is disconnected, local monitoring through the LCD and Serial Monitor is intended to continue. Cloud dashboard integration is planned as a future improvement.

## 9. System Flow

1. Start the system.
2. Initialize ESP32 and peripherals.
3. Attempt Wi-Fi connection.
4. Generate simulated sensor readings.
5. Monitor charging parameters.
6. Analyze driver behaviour.
7. Check security mode.
8. Detect suspicious movement.
9. Activate buzzer if theft is detected.
10. Update LCD and Serial Monitor.
11. Repeat monitoring.

## 10. Conclusion

The system demonstrates a prototype for EV monitoring and anti-theft functionality using ESP32. It combines charging-condition monitoring, driver behaviour analysis, security mode, buzzer alerts, LCD display, and Wi-Fi connectivity.

Real sensor integration, improved theft detection, GPS tracking, and IoT dashboard functionality are future enhancements.
