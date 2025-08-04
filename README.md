# Temperature Threshold Warning System 

This project uses an **Arduino Uno** and a **DHT11 temperature sensor** to monitor room temperature.  
If the temperature exceeds **30°C**, an LED turns ON as a visual warning. Perfect for a basic home temperature alert system!

---

## 📦 Components
- Arduino Uno
- DHT11 temperature sensor
- LED
- 220Ω resistor (for LED)
- 10kΩ resistor (pull-up for DHT11 DATA line)
- Breadboard & jumper wires

---

## ⚡ Circuit Connections

### 🔹 DHT11 Sensor
| DHT11 Pin | Connects To        |
|-----------|--------------------|
| VCC       | 5V (Arduino)       |
| DATA      | D2 (Arduino) + 10kΩ pull-up to 5V |
| GND       | GND (Arduino)      |

### 🔹 LED
| LED Pin | Connects To           |
|---------|-----------------------|
| Anode   | D13 (Arduino)         |
| Cathode | GND via 220Ω resistor |

---

## 📝 Code

The Arduino sketch is located at:
