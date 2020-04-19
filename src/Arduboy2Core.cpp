/**
 * @file Arduboy2Core.cpp
 * \brief
 * The Arduboy2Core class for Arduboy hardware initilization and control.
 */

#include "Arduboy2Core.h"
TFT_eSPI screen;
// Adafruit_MCP23017 mcp;
// Adafruit_MCP4725 dac;
ESPboyLED myled;

uint8_t Arduboy2Core::sBuffer[];

Arduboy2Core::Arduboy2Core() {}


void Arduboy2Core::boot(){
  Serial.begin(9600);

WiFi.mode(WIFI_OFF);
  delay(100);

//LED init
  myled.begin();

//DAC init, LCD backlit off
//  dac.begin(MCP4725address);
//  delay(50);
//  dac.setVoltage(0, false);
//  delay(100);

//MCP23017 and buttons init, should preceed the TFT init
//  mcp.begin(MCP23017address);
//  delay(100);

//  for (int i = 0; i < 8; ++i){
//    mcp.pinMode(i, INPUT);
//    mcp.pullUp(i, HIGH);
//  }
// Buttons INIT
  pinMode(PIN_PADDLE, OUTPUT);
  pinMode(PIN_PADDLE2, OUTPUT);
  pinMode(PIN_BUTTONS, OUTPUT);

//Sound init and test
//  pinMode(PIN_SPEAKER_1, OUTPUT);
//  tone(PIN_SPEAKER_1, 200, 100);
//  delay(100);
//  tone(PIN_SPEAKER_1, 100, 100);
//  delay(100);
//  noTone(PIN_SPEAKER_1);

//TFT init
//  mcp.pinMode(CSTFTPIN, OUTPUT);
//  mcp.digitalWrite(CSTFTPIN, LOW);
  screen.begin();
  delay(200);
  screen.setRotation(0);  // ST7735
//  screen.setRotation(1);  // ST7789

  screen.fillScreen(TFT_BLACK);

//draw ESPboylogo
  screen.drawXBitmap(30, 20, ESPboyLogo, 68, 64, TFT_YELLOW);
  screen.setTextSize(1);
  screen.setTextColor(TFT_YELLOW);
  screen.setCursor(13, 95);
  screen.print(F("ESP8266 Arduboy"));

//LCD backlit on
  for (uint8_t bcklt=0; bcklt<100; bcklt++){
//    dac.setVoltage(bcklt*20, false);
    delay(10);}
//  dac.setVoltage(4095, true);
  delay(300);
  screen.fillScreen(TFT_BLACK);
}


void Arduboy2Core::setCPUSpeed8MHz() {};
void Arduboy2Core::bootPins() {};
void Arduboy2Core::bootOLED() {};
void Arduboy2Core::LCDDataMode() {};
void Arduboy2Core::LCDCommandMode() {};
void Arduboy2Core::bootSPI(){}
void Arduboy2Core::SPItransfer(uint8_t data) {};
void Arduboy2Core::safeMode(){}
void Arduboy2Core::bootPowerSaving() {};
void Arduboy2Core::sendLCDCommand(uint8_t command){};
void Arduboy2Core::exitToBootloader() {};
void Arduboy2Core::mainNoUSB(){};
// turn all display pixels on, ignoring buffer contents
// or set to normal buffer display
void Arduboy2Core::allPixelsOn(bool on){};
void Arduboy2Core::blank() {};
// invert the display or set to normal
// when inverted, a pixel set to 0 will be on
void Arduboy2Core::invert(bool inverse){};
// flip the display vertically or set to normal
void Arduboy2Core::flipVertical(bool flipped){};
// flip the display horizontally or set to normal
void Arduboy2Core::flipHorizontal(bool flipped){};
void Arduboy2Core::paint8Pixels(uint8_t pixels){}
void Arduboy2Core::freeRGBled(){};


/* Power Management */
void Arduboy2Core::idle() {
delay(1);
};


// Shut down the display
void Arduboy2Core::displayOff() {
// dac.setVoltage(0, false);
};


// Restart the display after a displayOff()
void Arduboy2Core::displayOn() {
// dac.setVoltage(4095, false);
};

uint8_t Arduboy2Core::width() { return WIDTH; }

uint8_t Arduboy2Core::height() { return HEIGHT; }


/* Drawing */

void Arduboy2Core::paintScreen(const uint8_t *image){
  //memcpy(sBuffer, image, HEIGHT*WIDTH/8);
};

// paint from a memory buffer, this should be FAST as it's likely what
// will be used by any buffer based subclass
//
// The following assembly code runs "open loop". It relies on instruction
// execution times to allow time for each byte of data to be clocked out.
// It is specifically tuned for a 16MHz CPU clock and SPI clocking at 8MHz.
void Arduboy2Core::paintScreen(uint8_t image[], bool clear) {
//  memcpy(sBuffer, image, HEIGHT*WIDTH/8);
//  if (clear) memset(sBuffer, 0, HEIGHT*WIDTH/8);
};


/* RGB LED */
void Arduboy2Core::setRGBled(uint8_t red, uint8_t green, uint8_t blue){
//  myled.setRGB (red, green, blue);
};

void Arduboy2Core::setRGBled(uint8_t color, uint8_t val){
//  if (color == RED_LED)   myled.setR (val);
//  else
//    if (color == GREEN_LED) myled.setG (val);
//    else
//      if (color == BLUE_LED)  myled.setB (val);
};


void Arduboy2Core::digitalWriteRGB(uint8_t red, uint8_t green, uint8_t blue){
  if (red) myled.setR (200); else myled.setR (0);
  if (green) myled.setG (200); else myled.setG (0);
  if (blue) myled.setB (200); else myled.setB (0);
};


void Arduboy2Core::digitalWriteRGB(uint8_t color, uint8_t val){
  if (color == 0)
  	if(val) myled.setR (200); else myled.setR (0);
  if (color == 1)
    if(val) myled.setG (200); else myled.setG (0);
  if (color == 2)
    if(val) myled.setB (200); else myled.setB (0);
}


/* Buttons */
uint16_t Arduboy2Core::getPaddle(){

  digitalWrite(PIN_BUTTONS,LOW);
  digitalWrite(PIN_PADDLE,HIGH);
  digitalWrite(PIN_PADDLE2,LOW);

  return analogRead(PIN_ADC);
}

uint16_t Arduboy2Core::getPaddle2(){

  digitalWrite(PIN_BUTTONS,LOW);
  digitalWrite(PIN_PADDLE,LOW);
  digitalWrite(PIN_PADDLE2,HIGH);

  return analogRead(PIN_ADC);
}

/* Buttons */
uint8_t Arduboy2Core::buttonsState(){
  uint8_t buttons = 0;
//  uint16_t keystate;
//  keystate = ~mcp.readGPIOAB() & 255;
    // LEFT_BUTTON, RIGHT_BUTTON, UP_BUTTON, DOWN_BUTTON, A_BUTTON, B_BUTTON

//  if (keystate&PAD_ANY){
//    if (keystate&PAD_LEFT)  { buttons |= LEFT_BUTTON; }  // left
//    if (keystate&PAD_RIGHT) { buttons |= RIGHT_BUTTON; }  // right
//    if (keystate&PAD_UP)    { buttons |= UP_BUTTON; }  // up
//    if (keystate&PAD_DOWN)  { buttons |= DOWN_BUTTON; }  // down
//    if (keystate&PAD_ACT)   { buttons |= A_BUTTON; }  // a?
//    if (keystate&PAD_ESC)   { buttons |= B_BUTTON; }  // b?


  digitalWrite(PIN_BUTTONS,HIGH);
  digitalWrite(PIN_PADDLE,LOW);
  digitalWrite(PIN_PADDLE2,LOW);

  uint16_t a0 = analogRead(PIN_ADC);
    if (a0  < 570) {
      if (a0 < 362) {
        if (a0 > 176) {
          if (a0 > 277) {
            if (a0 > 308)
              buttons |= LEFT_BUTTON | RIGHT_BUTTON;
            else
              buttons |= UP_BUTTON | A_BUTTON;
            }
          else if (a0 > 241)
              buttons |= LEFT_BUTTON;
          else
              buttons |= UP_BUTTON | DOWN_BUTTON;
        }
        else if (a0 > 90) {
              buttons |= UP_BUTTON;
        }
      }
      else {
        if (a0 > 485)
            if (a0 > 531)
              buttons |= DOWN_BUTTON;
            else
              buttons |= UP_BUTTON | B_BUTTON;
        else if (a0 > 443)
              buttons |= LEFT_BUTTON | A_BUTTON;
        else
            buttons |= RIGHT_BUTTON;
        }
      }
    else {
      if (a0 < 737)
        if (a0 < 661)
          if (a0 > 615)
            buttons |= DOWN_BUTTON | A_BUTTON;
          else
            buttons |= RIGHT_BUTTON | A_BUTTON;
        else if (a0 > 695)
          buttons |= A_BUTTON;
        else
          buttons |= LEFT_BUTTON | B_BUTTON;
      else if (a0 < 850)
        if (a0 > 805)
          buttons |= DOWN_BUTTON | B_BUTTON;
        else
          buttons |= RIGHT_BUTTON | B_BUTTON;
      else {
        if (a0 > 880)
          buttons |= B_BUTTON;
        else
          buttons |= A_BUTTON | B_BUTTON;
        }
      }
  return buttons;
}


// delay in ms with 16 bit duration
void Arduboy2Core::delayShort(uint16_t ms) {
  delay((unsigned long) ms);
};
