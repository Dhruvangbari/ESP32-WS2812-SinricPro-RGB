# ESP32 WS2812 RGB with Sinric Pro ☁️💡  
Control light from anywhere. Literally.

This project turns an ESP32 into a **cloud-connected RGB lighting controller** using **Sinric Pro**.  
With Alexa or Google Home, you can control **power, color, and brightness** of a WS2812 LED strip from anywhere in the world.

No remotes.  
No local network limits.  
Just **internet-powered light control**.

---

## 🧠 Project Overview
The ESP32 connects to Wi-Fi, authenticates with Sinric Pro, and exposes the LED strip as a **Smart RGB Light**.  
Every command from the cloud is handled in real time and reflected instantly on the LEDs.

This is not a demo sketch — it’s a **real IoT lighting system**.

---

## ⚡ Why This Project Stands Out
- True **cloud-based RGB control**
- Works with **Alexa & Google Home**
- Real-time color wheel & brightness control
- Stable FastLED power management
- Designed for beginners, structured like a pro project

If you understand this project, you understand **real-world IoT basics**.

---

## 🔧 Hardware Requirements
- ESP32 Dev Board  
- WS2812 / WS2812B RGB LED Strip (34 LEDs)  
- External 5V 2A Power Supply  
- Jumper Wires  
- (Optional) 330Ω resistor + 1000µF capacitor  

⚠️ **Never power LEDs from ESP32 5V pin.**  
Always use an external power supply with **common GND**.

---

## 🔌 Wiring
| Component | Connection |
|---------|------------|
| LED DATA | GPIO 13 |
| LED 5V   | External 5V |
| LED GND  | Power GND |
| ESP32 VIN | External 5V |
| ESP32 GND | Power GND |

---

## ☁️ Sinric Pro Setup
1. Create an account at **sinric.pro**
2. Add a new device → **Smart Light → RGB Light**
3. Copy:
   - App Key
   - App Secret
   - Device ID
4. Paste them into the firmware

This exposes your LED strip as a **cloud-controlled smart light**.

---

## 💻 Software Stack
### Firmware
- Arduino IDE
- ESP32 Board Package
- FastLED
- SinricPro

### Supported Controls
- Power ON / OFF
- RGB Color Selection
- Brightness Control

---

## ▶ How It Works
1. ESP32 connects to Wi-Fi
2. Authenticates with Sinric Pro cloud
3. Listens for cloud commands
4. Updates LED strip in real time

Simple architecture. Powerful result.

---

## 🧪 Common Issues & Fixes
- **ESP32 resets** → Power supply too weak  
- **No color wheel** → Device must be *RGB Light*  
- **Device offline** → Check Wi-Fi & credentials  

---

## 🎯 Use Cases
- Smart room lighting
- Voice-controlled décor
- IoT learning projects
- Home automation experiments

---

## 🧠 Author
**Dhruvang Bari**

Built to prove that even LEDs deserve cloud access.
