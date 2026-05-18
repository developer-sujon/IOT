# Smart Light Sequencing

An Arduino project that creates a back-and-forth LED chase effect (like KITT car).

## Components Used

- Arduino (Uno/Nano)
- 4 LEDs
- Breadboard & Jumper Wires

## Pin Configuration

| Component | Arduino Pin |
| --------- | ----------- |
| LED 1     | D2          |
| LED 2     | D3          |
| LED 4     | D4          |
| LED 4     | D5          |

## Features

- LEDs chase back and forth
- Smooth sequential lighting
- Serial monitor output for current LED pin

## How It Works

1. LEDs light up one by one from D2 to D5
2. Then reverse direction from D5 back to D2
3. Repeats continuously
4. Each LED stays on for 300ms
