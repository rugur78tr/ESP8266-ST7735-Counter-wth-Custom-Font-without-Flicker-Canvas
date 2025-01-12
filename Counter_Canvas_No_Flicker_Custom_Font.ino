#include <Adafruit_GFX.h>
#include <Adafruit_ST7735.h>
#include <spi_flash.h>

#define TFT_CS 15
#define TFT_RST 0
#define TFT_DC 2

Adafruit_ST7735 tft = Adafruit_ST7735(TFT_CS, TFT_DC, TFT_RST);

#include "Robot_Kicks_Italic20pt7b.h"

GFXcanvas16 canvas(160, 64);


void setup() 
{
  tft.initR(INITR_BLACKTAB);
  tft.setRotation(3);
  tft.fillScreen(ST7735_BLACK);
  
  canvas.setFont(&Robot_Kicks_Italic20pt7b);
  canvas.setTextWrap(false);
  
}

void loop() 
{
  

  for(int i = 0; i <= 1000; i++)
  {
    canvas.fillScreen(ST7735_BLACK);
    canvas.setTextColor(ST7735_GREEN);
    canvas.setCursor(12, 30);   // Pos. is BASE LINE when using fonts!
    canvas.print(i);    // Print elapsed time in milliseconds
    tft.drawRGBBitmap(0, 45, canvas.getBuffer(), canvas.width(), canvas.height());
  
  delay(25);
  }
  
  
}










