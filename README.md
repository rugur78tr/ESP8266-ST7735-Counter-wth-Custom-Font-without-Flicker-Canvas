No flicler during counter with custom Font
When using custom fonts with Adafruit GFX library, you may encounter flickering during the numbers refreshed. To avoid getting flickers, best way that I realized is using canvas. Canvas is particularly refreshes the defined area not the whole screen. So that we dont have any flickering. You can see an example code for ESP8266 and 1.8 inch TFT LCD Screen (160x128) Adafruit ST7735 library.

https://www.youtube.com/watch?v=kpJNYfdrsqY&ab_channel=RecepU%C4%9Fur  
