# ⚡ Lightning Firmware

Firmware for the **Lightning** project — a simple RGB LED controller powered by an Arduino-compatible board.  
It receives color data (RGBA) over Serial and drives an RGB LED accordingly. Built with **PlatformIO**.

## 🎯 Features

- Receives color codes via Serial (format: `RGBA`, char integer value used)
- Handles brightness with optional alpha (A)
- Converts values to PWM for RGB LED output
- Designed to pair with the [Lightning Qt App](https://github.com/commander15/Lightning) 🎨💡

## 🛠️ Hardware Setup

**LED Pins Configuration:**

| Color | Pin |
|-------|-----|
| Red   | 9   |
| Green | 10  |
| Blue  | 11  |
| GND   | 8   | ← connect this pin to the LED’s cathode (via transistor if needed)

> 🔧 You can use common anode or cathode RGB LEDs, but adjust wiring and logic accordingly.

## 🔌 Serial Protocol

- Format: `R,G,B,A\n` (e.g. `255,120,60,200`)
- Each value is between `0-255`
- Alpha value controls brightness (PWM scaling)

## 📦 PlatformIO

To build and upload the firmware:

```bash
git clone https://github.com/commander15/LightningFirmware.git
cd LightningFirmware
pio run --target upload
```

## 🧪 Tested On

- Arduino Uno
- Arduino Nano

Works on most AVR-based boards with 3 PWM-capable pins.

## 👐 License

MIT — do what you love.

Made with ♥️, Qt, and glowing LEDs.
