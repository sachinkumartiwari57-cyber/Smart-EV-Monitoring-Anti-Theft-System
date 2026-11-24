#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <WiFi.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

#define BUZZER_PIN 18
#define SECURITY_PIN 19
#define BRAKE_PIN 23

const char* ssid = "Wokwi-GUEST";
const char* password = "";

float voltage, current, temperature, motorLoad, acceleration;

bool securityMode = false;
bool theftDetected = false;
bool suddenBrake = false;
bool wifiConnected = false;

unsigned long lastUpdate = 0;

void setup() {
  Serial.begin(115200);

  pinMode(BUZZER_PIN, OUTPUT);
  pinMode(SECURITY_PIN, INPUT_PULLUP);
  pinMode(BRAKE_PIN, INPUT_PULLUP);

  digitalWrite(BUZZER_PIN, LOW);

  lcd.init();
  lcd.backlight();

  lcd.setCursor(0, 0);
  lcd.print("SMART EV SYSTEM");
  lcd.setCursor(0, 1);
  lcd.print("Initializing...");

  WiFi.begin(ssid, password);

  delay(2000);
  lcd.clear();

  Serial.println("Smart EV System Started");
}

void loop() {
  readSensors();
  monitorCharging();
  analyzeDriver();
  detectTheft();

  if (millis() - lastUpdate >= 2000) {
    lastUpdate = millis();
    updateLCD();
    printData();
  }

  delay(100);
}

void readSensors() {
  voltage = random(440, 540) / 10.0;
  current = random(10, 120) / 10.0;
  temperature = random(250, 450) / 10.0;
  motorLoad = random(10, 100);
  acceleration = random(-30, 40) / 10.0;

  wifiConnected = WiFi.status() == WL_CONNECTED;
  securityMode = digitalRead(SECURITY_PIN) == LOW;
  suddenBrake = digitalRead(BRAKE_PIN) == LOW;
}

void monitorCharging() {
  if (current > 10 || temperature > 40) {
    Serial.println("WARNING: Abnormal Charging!");
  }
}

void analyzeDriver() {
  if (acceleration > 3.0) {
    Serial.println("Sudden Acceleration!");
  }

  if (suddenBrake) {
    Serial.println("Sudden Braking!");
  }

  if (motorLoad > 85) {
    Serial.println("Excessive Motor Load!");
  }
}

void detectTheft() {
  if (securityMode && (acceleration > 1.5 || motorLoad > 80)) {
    theftDetected = true;
  }

  digitalWrite(BUZZER_PIN, theftDetected ? HIGH : LOW);
}

void updateLCD() {
  lcd.clear();

  if (theftDetected) {
    lcd.setCursor(0, 0);
    lcd.print("THEFT ALERT!");
    lcd.setCursor(0, 1);
    lcd.print("Vehicle Moving");
  } else {
    lcd.setCursor(0, 0);
    lcd.print("V:");
    lcd.print(voltage, 1);
    lcd.print(" I:");
    lcd.print(current, 1);

    lcd.setCursor(0, 1);
    lcd.print("Temp:");
    lcd.print(temperature, 1);
    lcd.print("C ");
    lcd.print(wifiConnected ? "WiFi" : "OFF");
  }
}

void printData() {
  Serial.println("------- EV DATA -------");

  Serial.print("Voltage: ");
  Serial.print(voltage);
  Serial.println(" V");

  Serial.print("Current: ");
  Serial.print(current);
  Serial.println(" A");

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" C");

  Serial.print("Motor Load: ");
  Serial.print(motorLoad);
  Serial.println(" %");

  Serial.print("Acceleration: ");
  Serial.print(acceleration);
  Serial.println(" m/s2");

  Serial.print("Security: ");
  Serial.println(securityMode ? "ON" : "OFF");

  Serial.print("WiFi: ");
  Serial.println(wifiConnected ? "Connected" : "Disconnected");

  Serial.print("Theft: ");
  Serial.println(theftDetected ? "DETECTED" : "Normal");
}
