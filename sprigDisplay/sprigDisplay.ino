/*
  TITLE
  By V205
*/


/*



GPIO  16 Pin 21 MISO
GPIO 17 pin 22 LITE
GPIO18 pin 24 SCK
GPIO19 pin 25 MOSI
GPIO22 pin 29 D/C
chip select pin, it's gp21/pin27
RESET = gP26
USE THE GP ONE

Arduino_HWSPI(int8_t dc, int8_t cs = GFX_NOT_DEFINED, SPIClass *spi = &SPI, bool is_shared_interface = true); // Constructor
*/
#include <Arduino_GFX_Library.h>
//Arduino_DataBus *bus = new Arduino_HWSPI(16 /* DC */, 5 /* CS */);
Arduino_DataBus *bus = new Arduino_HWSPI(22, 21);
//Arduino_GFX *gfx = new Arduino_ILI9341(bus, 17 /* RST */);
Arduino_GFX *gfx = new Arduino_ST7735(bus,26 );
void setup() 
{
  // put your setup code here, to run once:
  Serial.begin(115200); // begin serial comunication.
  pinMode(17, OUTPUT);
  digitalWrite(17,HIGH);
  delay(1000);
  Serial.println(F("STARTING " __FILE__ " from " __DATE__ __TIME__));
  gfx->begin();
gfx->fillScreen(BLACK);
gfx->setCursor(10, 10);
gfx->setTextColor(RED);
gfx->println("Hello World!");


}

void loop() 
{
  // put your main code here, to run repeatedly:
  delay(10000);
  Serial.println(F("STARTING " __FILE__ " from " __DATE__ __TIME__));
}
