# Push Button Control

An Arduino project that controls an LED with a push button - press 3 times to turn on, press again to turn off.

## Components Used
- Arduino (Uno/Nano)
- Push Button
- LED
- Breadboard & Jumper Wires

## Pin Configuration
| Component         | Arduino Pin |
|-------------------|-------------|
| Push Button       | D2 (INPUT_PULLUP) |
| LED               | D6 (PWM)    |

## Features
- Button press counting (3 presses to turn on)
- Smooth fade-in effect when turning on
- Serial monitor output for count and brightness
- Debounce handling

## How It Works
1. Press button 3 times → LED fades on smoothly
2. Press button once more → LED turns off
3. Count resets after each on/off cycle
4. Brightness levels: 0% → 25% → 50% → 75% → 100%
