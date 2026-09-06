#include <Arduino.h>
#include <SPI.h>
#include <SD.h>
#include <TFT_eSPI.h>

// sd
const int SD_CS = 7;

// shared
const int MISO_PIN = 39;
const int MOSI_PIN = 4;
const int DC = 5;
const int SCK_PIN = 15;

// screen
const int TFT_CS = 12;
const int TFT_RST = 6;
const int LED = 38;

// toslink
const int TOS = 17;

TFT_eSPI tft = TFT_eSPI();

void listFilesToScreen(File dir) {
  int yPos = 30;
  
  tft.setCursor(10, 10);
  tft.setTextColor(TFT_GREEN, TFT_BLACK);
  tft.setTextSize(1);
  tft.println("sd card files:");

  while (true) {
    File entry = dir.openNextFile();
    if (!entry) {
      break;
    }
    
    tft.setCursor(10, yPos);
    
    if (entry.isDirectory()) {
      tft.print("[DIR] ");
      tft.println(entry.name());
    } else {
      tft.print("  ");
      tft.print(entry.name());
      tft.print(" (");
      tft.print(entry.size());
      tft.println("B)");
    }
    
    yPos += 15;
    
    if (yPos > 220) {
      tft.setCursor(10, yPos);
      tft.println("...and more...");
      break;
    }
    
    entry.close();
  }
}

void setup() {
  Serial.begin(115200);

  pinMode(LED, OUTPUT);
  digitalWrite(LED, HIGH);

  SPI.begin(SCK_PIN, MISO_PIN, MOSI_PIN);

  tft.init();
  tft.setRotation(1);
  tft.fillScreen(TFT_BLACK);

  if (!SD.begin(SD_CS)) {
    tft.setTextColor(TFT_RED, TFT_BLACK);
    tft.setCursor(10, 10);
    tft.println("sd card not found");
    return;
  }

  File root = SD.open("/");
  if (!root) {
    tft.setTextColor(TFT_RED, TFT_BLACK);
    tft.setCursor(10, 10);
    tft.println("could not open root folder");
    return;
  }

  listFilesToScreen(root);
}

void loop() {
}