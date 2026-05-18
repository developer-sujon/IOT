# Breathing LED

An Arduino project that creates a breathing/fading LED effect with 3 LEDs using PWM.

## Components Used
- Arduino (Uno/Nano)
- 3 LEDs
- Breadboard & Jumper Wires

## Pin Configuration
| Component         | Arduino Pin |
|-------------------|-------------|
| LED 1             | D9 (PWM)    |
| LED 2             | D10 (PWM)   |
| LED 3             | D11 (PWM)   |

## Features
- Smooth fading (breathing) effect
- Sequential fading for 3 LEDs
- Uses PWM (Pulse Width Modulation)

## How It Works
1. Each LED fades in and out using analogWrite()
2. LEDs fade sequentially one after another
3. Brightness levels: 50 → 150 → 255 → 0
