
### 🚦 How it works:
- Reads temperature from the DHT11 sensor.
- If temperature **> 30°C**, LED turns ON.
- Otherwise, LED remains OFF.
- Prints the temperature to the Serial Monitor for easy debugging.

---

## 🚀 How to Use

1. Connect the circuit as shown above.
2. Upload `TempThresholdAlert.ino` to your Arduino using the Arduino IDE.
3. Open **Serial Monitor** at **9600 baud** to read live temperature.
4. Observe the LED — it lights up when the temperature exceeds 30°C.

---

## 🔗 Libraries

Install these libraries in Arduino IDE:
- [DHT sensor library by Adafruit](https://github.com/adafruit/DHT-sensor-library)
- [Adafruit Unified Sensor](https://github.com/adafruit/Adafruit_Sensor)

---

## 🛡️ License

MIT License – see [LICENSE](LICENSE) file for details.

---

## 📸 Circuit Diagram

(Add your circuit image here later, e.g. ![Circuit Diagram](images/circuit.png))

---

💡 **Enjoy building your temperature alert system!**
