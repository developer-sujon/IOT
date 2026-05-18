# Automatic Street Light

An Arduino project that automatically controls street lights based on ambient light using an LDR sensor.

## Components Used

- Arduino (Uno/Nano)
- LDR (Light Dependent Resistor)
- 3 LEDs
- Breadboard & Jumper Wires

## Pin Configuration

| Component | Arduino Pin |
| --------- | ----------- |
| LDR       | A0          |
| LED 1     | D2          |
| LED 2     | D3          |
| LED 3     | D4          |

## Features

- Automatic light detection using LDR
- Turns on LEDs when dark (LDR value < 10)
- Turns off LEDs when bright
- Serial monitor output for LDR values

## How It Works

1. LDR reads ambient light intensity
2. If light level is low (dark), all LEDs turn on
3. If light level is high (bright), all LEDs turn off
4. LDR values are printed to serial monitor
