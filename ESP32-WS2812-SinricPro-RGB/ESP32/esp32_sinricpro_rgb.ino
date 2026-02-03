#include <WiFi.h>
#include <FastLED.h>
#include <SinricPro.h>
#include <SinricProLight.h>

#define WIFI_SSID "YOUR_WIFI"
#define WIFI_PASS "YOUR_PASS"

#define APP_KEY "YOUR_APP_KEY"
#define APP_SECRET "YOUR_APP_SECRET"
#define DEVICE_ID "YOUR_DEVICE_ID"

#define LED_PIN 13
#define NUM_LEDS 34

CRGB leds[NUM_LEDS];
byte r=255, g=255, b=255, bright=255;

bool onPowerState(const String&, bool &state) {
  if(!state){
    FastLED.clear();
    FastLED.show();
  } else {
    FastLED.setBrightness(bright);
    fill_solid(leds, NUM_LEDS, CRGB(r,g,b));
    FastLED.show();
  }
  return true;
}

bool onColor(const String&, byte &R, byte &G, byte &B) {
  r = R; g = G; b = B;
  FastLED.setBrightness(bright);
  fill_solid(leds, NUM_LEDS, CRGB(r,g,b));
  FastLED.show();
  return true;
}

bool onBrightness(const String&, int &level) {
  bright = map(level, 0, 100, 0, 255);
  FastLED.setBrightness(bright);
  FastLED.show();
  return true;
}

void setup() {
  FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);
  FastLED.setMaxPowerInVoltsAndMilliamps(5, 2000);

  WiFi.begin(WIFI_SSID, WIFI_PASS);
  while (WiFi.status() != WL_CONNECTED) delay(500);

  SinricProLight &light = SinricPro[DEVICE_ID];
  light.onPowerState(onPowerState);
  light.onColor(onColor);
  light.onBrightness(onBrightness);

  SinricPro.begin(APP_KEY, APP_SECRET);
}

void loop() {
  SinricPro.handle();
}
