#include <TFT_eSPI.h>
#include "Tetra.hpp"

#define SEED_PIN 36

TFT_eSPI tft = TFT_eSPI();
Tetra tetra(tft, TFT_WIDTH, TFT_HEIGHT);
int color = TFT_GREEN;

void displayWrite(const String &message)
{
  tft.fillScreen(TFT_BLACK);
  tft.setTextSize(2);
  tft.setTextDatum(MC_DATUM);
  tft.setTextColor(TFT_WHITE, TFT_BLACK);
  tft.drawString(message, TFT_HEIGHT / 2, TFT_WIDTH / 2);
}

void setup()
{
  Serial.begin(115200);
  Serial.println("Tetra Start");

  tft.init();
  randomSeed(analogRead(SEED_PIN));
}

void loop()
{
  tetra.animate(color);
  delay(1);
}
