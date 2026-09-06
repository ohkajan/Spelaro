<h1 align="center">
<img width="100" height="100" alt="photo" src="https://github.com/user-attachments/assets/da2fa0a2-31f5-4f02-8ed0-0954f474e9e1" />
<br> Spelarö <br>

<h4 align="center">
A standalone audio player and optical transmitter powered by the ESP32-S3. Play FLAC and MP3 files from a micro SD card, navigate your library using the 2.8-inch screen and 5-way switch, and output clean digital audio via TOSLINK.
</h4>

<h4 align="center">
  
![License](https://img.shields.io/badge/License-MIT-blue.svg)
![Project](https://img.shields.io/badge/Project-Hardware-yellow.svg)
![Forge](https://img.shields.io/badge/HackClub-Forge-red.svg)
<h4 align="center">

<img width="3840" height="2160" alt="front" src="https://github.com/user-attachments/assets/018472c6-5f51-4824-9b8e-4eb2aa4a17ab" />

# About the project

Spelarö is a custom hardware project that lets you play flac and mp3 files directly from a micro SD card. It sends the data optically via a toslink transmitter with a toslink cable. There was no product like this, so i decided to make my own for me and my dad.

## How It Works

* **Storage:** Music files are stored on a standard micro SD card. The ESP32-S3 reads the files directly from the card. It then sends it via toslink.
* **Interface:** You use a 2.8-inch TFT display to see your library and a 5-way joystick switch to navigate through your libary of songs. 
* **Audio Output:** The ESP32-S3 processes the audio data and sends it out through a toslink transmitter. This results in perfect audio for audiophiles like me and my dad. 

## Features

* **ESP32-S3-WROOM-1** microcontroller
* **1x 2.8" TFT Display** 
* **1x 5-way tactile joystick switch** 
* **1x 1-way tactile switch** 
* **1x Micro SD Card Reader** 
* **1x Optical Toslink Transmitter (OTJ-5)** 

# Schematic
<img width="1158" height="793" alt="image" src="https://github.com/user-attachments/assets/90ae9d52-611f-4bb4-adb6-b1ec26b8360f" />


# PCB
<img width="606" height="559" alt="image" src="https://github.com/user-attachments/assets/2d679124-b53a-46b5-8fc2-24d748398d7b" />
<img width="985" height="892" alt="image" src="https://github.com/user-attachments/assets/a557656a-01d2-46ad-9511-70052a6b1f50" />


# Bill Of Materials

| Item | Link | Cost | Notes | Running Total |
|---|---|---|---|---|
| ESP32-S3-WROOM-1 | [Electrokit](https://www.electrokit.com/esp32-s3-wroom-1-mcu-modul-16mb-psram-8mb) | 7.73 | MCU Module 16MB, PSRAM 8MB | 7.73 |
| Voltage Regulator | [Electrokit](https://www.electrokit.com/lp2985-33-sot-23-5-spanningsregulator-ldo-3.3v) | 1.52 | LP2985-33 SOT-23-5 LDO 3.3V 0.15A | 9.25 |
| Toslink | [Electrokit](https://www.electrokit.com/toslink-optisk-sandare-pcb) | 2.93 | Optical Toslink transmitter PCB | 12.18 |
| Micro USB | [Electrokit](https://www.electrokit.com/usb-micro-b-kontakt-smd-pcb) | 1.10 | USB micro-B contact SMD PCB | 13.28 |
| Screen | [Amazon](https://www.amazon.se/-/en/gp/product/B09Z29CGY1/ref=ox_sc_saved_image_1?smid=A3LA1TDA4Q3SUA&psc=1) | 13.58 | TFT display | 26.86 |
| Micro SD Reader | [Electrokit](https://www.electrokit.com/kontakt-microsd) | 0.68 | SMD 8-pin (Qty: 2) | 27.54 |
| Switch (SW1, SW2) | [Electrokit](https://www.electrokit.com/tryckknapp-pcb-smd-1-pol-ksr-2n) | 1.52 | Taktil omkopplare SMD 6x3.8x2.5mm | 29.06 |
| 5 way switch | [Electrokit](https://www.electrokit.com/navigeringsomkopplare-5-vags-med-tryckknapp-1) | 2.14 | Joystick navigationsknapp 10x10mm | 31.20 |
| 1 way switch | [Electrokit](https://www.electrokit.com/tryckknapp-pcb-12x12x5mm) | 0.33 | Taktil omkopplare PCB (Qty: 4) | 31.53 |
| Capacitor (C1, C2) | [Electrokit](https://www.electrokit.com/kondensator-1206-x7r-100nf-10) | 2.08 | 100nF and 10nF 1206 X7R (Qty: 20 total) | 33.61 |
| Resistor (R1, R2) | [Electrokit](https://www.electrokit.com/motstand-10kohm-0.25w-smd-1206) | 1.04 | 10kohm 0.25W SMD 1206 (Qty: 10) | 34.65 |
| PCB | [JLCPCB](https://jlcpcb.com) | 2.00 | 5 pieces | 36.65 |
| Shipping / taxes | N/A | 31.24 | Estimated shipping & components delivery | 67.89 |
