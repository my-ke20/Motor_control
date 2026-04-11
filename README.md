[README_motor_control.md](https://github.com/user-attachments/files/26646790/README_motor_control.md)
# ⚙️ Motor Control — Arduino DC Motor Driver

![Arduino](https://img.shields.io/badge/Arduino-00979D?style=for-the-badge&logo=arduino&logoColor=white)
![C++](https://img.shields.io/badge/C++-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![License](https://img.shields.io/badge/License-MIT-a855f7?style=for-the-badge)

> **Precision speed and direction control of a DC motor using an Arduino and the L293D motor driver IC.**

---

## 📖 About

This project implements firmware for controlling a DC motor via an Arduino microcontroller. It leverages the **L293D H-Bridge motor driver IC** to act as the interface between the low-power Arduino outputs and the higher-current demands of the motor — allowing full bidirectional control of speed and direction.

Whether you're building a robot, an actuator system, or just getting your hands dirty with motor control fundamentals, this is a clean and well-commented starting point.

---

## ✨ Features

- ✅ Full **bidirectional motor control** (forward & reverse)
- ✅ **PWM-based speed control** via Arduino's analogWrite
- ✅ Uses the **L293D H-Bridge IC** for safe motor interfacing
- ✅ Clean, readable, and well-commented C++ code
- ✅ Easy to extend for encoder feedback or PID control

---

## 🔧 Hardware Requirements

| Component | Details |
|-----------|---------|
| Microcontroller | Arduino Uno / Nano |
| Motor Driver IC | L293D H-Bridge |
| Motor | Any 5V–12V DC motor |
| Power Supply | 5V for logic, 6–12V for motor |
| Wires & Breadboard | For prototyping |

---

## 🚀 Getting Started

### 1. Clone the repository
```bash
git clone https://github.com/my-ke20/Motor_control.git
cd Motor_control
```

### 2. Open in Arduino IDE
Open `motor_control_succesfull_1.ino` in the [Arduino IDE](https://www.arduino.cc/en/software).

### 3. Wire up the circuit
Connect your Arduino, L293D, and DC motor according to the pin definitions at the top of the `.ino` file.

### 4. Upload & run
Select your board and COM port, then hit **Upload**. Watch your motor spin! 🎉

---

## 📁 Project Structure

```
Motor_control/
├── motor_control_succesfull_1.ino   # Main firmware file
├── Screenshot from 2026-03-20.png   # Circuit/simulation screenshot
└── README.md
```

---

## 🧠 How It Works

The **L293D** is an H-Bridge IC that allows current to flow in either direction through the motor, enabling forward and reverse rotation. The Arduino sends control signals to the L293D's input pins and uses **PWM (Pulse Width Modulation)** on the enable pin to regulate motor speed — a higher duty cycle means faster rotation.

```
Arduino PWM Pin ──→ L293D Enable Pin ──→ Motor Speed
Arduino Direction Pins ──→ L293D Input Pins ──→ Motor Direction
```

---

## 🔮 Possible Extensions

- Add an **encoder** for closed-loop speed feedback
- Implement a **PID controller** for precise speed regulation
- Integrate with a **keypad** for user input (see [Advanced-Motor-control](https://github.com/my-ke20/Advanced-Motor-control))
- Add **Bluetooth control** via an HC-05 module

---

## 👤 Author

**Michael Otieno Odhiambo**
- GitHub: [@my-ke20](https://github.com/my-ke20)
- LinkedIn: [Michael Otieno](https://www.linkedin.com/in/michael-otieno-8a6a8a35b/)
- Email: michaelotieno915@gmail.com
