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

| Designator | Footprint | Qty | Value | Link | Price (USD) |
| :--- | :--- | :---: | :--- | :--- | :---: |
| A1 | `MODULE_NANO-ESP32-ENTRY` | 1 | Arduino_Nano_ESP32 | [Electrokit](https://www.electrokit.com/utvecklingskort-esp32-s3-nano-kompatibelt) | $16.72 |
| C1 | `1206` | 1 | 100nF | [Electrokit](https://www.electrokit.com/kondensator-1206-x7r-100nf-10) | $1.05 |
| J1 | `PinHeader_1x14_P2.54mm_Vertical` | 1 | Conn_01x14_Pin | [Amazon](https://www.amazon.se/gp/product/B09Z29CGY1/ref=ox_sc_act_image_1?smid=A3LA1TDA4Q3SUA&psc=1) | $13.67 |
| LED1 | `WS2812B` | 1 | WS2812B | [Electrokit](https://www.electrokit.com/led-smd5050-rgb-adresserbar-sk6812) | $1.31 |
| R1, R2, R3 | `1206` | 3 | 10k | [Electrokit](https://www.electrokit.com/motstand-10kohm-0.25w-smd-1206) | $1.05 |
| S1 | `SW_VS-1213-67-160GF` | 1 | VS-1213-67-160GF | [Electrokit](https://www.electrokit.com/tryckknapp-pcb-12x12x5mm) | $1.35 |
| SW1 | `C145910` | 1 | K1-1506SN-01 | [Electrokit](https://www.electrokit.com/joystick-navigationsknapp-5-vags-smd-10x10mm-1) | $1.95 |
| TF1 | `TF-SMD_TF-012` | 1 | TF-CARD H1.8 SY | [Electrokit](https://www.electrokit.com/kontakt-microsd) | $1.37 |
| U3 | `toslink` | 1 | OTJ-5 | [Electrokit](https://www.electrokit.com/toslink-optisk-sandare-pcb) | $2.94 |
| PCB | - | 5 | - | [JLCPCB](https://jlcpcb.com/) | $2.10 |
| **Shipping** | - | - | - | - | $33.01 |
| **Total** | - | - | - | - | **$76.52** |
