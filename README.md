# Flashing LED Light

This Arduino project uses a **Light Dependent Resistor (LDR)** to measure ambient light levels. When the light level drops below a threshold of **700**, an **RGB LED** begins flashing through a sequence of colors. A **paper cube cutout** can be used to diffuse the light, enhancing the visual effect.

---

## Components Used

| Component             | Quantity |
|----------------------|----------|
| Arduino Uno R3       | 1        |
| RGB LED (common cathode) | 1    |
| 220Ω Resistors        | 3        |
| 10kΩ Resistor         | 1        |
| LDR (Photoresistor)   | 1        |
| Breadboard           | 1        |
| Jumper Wires         | 9      |
| Paper Cube Cutout (for diffusion) | 1 |

---

## Installation & Setup

1. **Connect Power to the Bread Board**
   - 5V → Bread Board positive strip (+)
   - GND → Bread Board negative strip (-)

1. **Connect the LDR**  
   - One leg of LDR → 5V  
   - Other leg of LDR → A0 and one end of 10kΩ resistor  
   - Other end of resistor → GND  
   (This forms a voltage divider)

2. **Connect the RGB LED**  
   - Red Pin → 220Ω Resistor → Digital Pin 11  
   - Green Pin → 220Ω Resistor → Digital Pin 9  
   - Blue Pin → 220Ω Resistor → Digital Pin 10  
   - Common Cathode Pin (the long pin) → GND

3. **Upload the Code**  
   Use the Arduino IDE to upload your sketch to the Arduino Uno.

4. **Add the Paper Cube (Optional)**  
   Place the paper cube cutout over the RGB LED to diffuse the flashing colors.

---

## How It Works

- The **LDR** continuously measures the surrounding light level.
- If the analog reading from the LDR is **below 700**, it means it's relatively dark.
- When it’s dark:
  - The **RGB LED starts flashing** through set colors in the code (like red, green, blue, purple, ect.).
- When it’s bright:
  - The LED turns **off**.

This makes it a reactive light display—great for nightlights or ambient room effects.

---

## Images / Videos

> Add your images or demo video links here.

- ![Wiring Setup](images/led-light-wiring.jpg)

---

## Simulation

> Use an online simulator like [Tinkercad](https://www.tinkercad.com/) to view or simulate the project.

- [Tinkercad Simulation Link](https://www.tinkercad.com/things/5i3UnPZWMWp-mood-light-nat?sharecode=4IkUhLk60JT4a3moR9Q4A7Ld3d45VGpm4YomhAr9dv4)

---

## Credits

- Project by: *Nat King*
- Inspired by: My manager/instructor's mood light project.
  My Manager's Github Link: [dmccoy1](https://github.com/dmccoy1)
---
