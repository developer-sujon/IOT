# Infrared Receiver

An Arduino project that receives and decodes infrared signals from a remote control using an IR receiver module.

## Components Used

- Arduino (Uno/Nano)
- IR Receiver Module (e.g., TSOP4838)
- Breadboard & Jumper Wires

## Pin Configuration

| Component   | Arduino Pin |
| ----------- | ----------- |
| IR Receiver | D11         |

## Features

- Receives and decodes IR signals
- Displays button codes in hexadecimal format on serial monitor
- LED feedback when IR signal is received
- Uses IRremote library

## How It Works

1. IR receiver module listens for IR signals on pin 11
2. When a signal is received, it decodes the raw data
3. Decoded button code is printed to serial monitor in HEX format
4. Resumes listening for next IR signal
