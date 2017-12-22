

//Example 1: set color from red, green, and blue components individually
  leds[i].red =    50; // 0-255
  leds[i].green = 100;
  leds[i].blue =  150;

  //Example 2: set color from red, green, and blue components all at once
  leds[i] = CRGB( 50, 100, 150);

  // Example 3: set color via 'hex color code' (0xRRGBB)
  leds[i] = 0x0000FF;

  // Example 4: set color via any named HTML web color
  leds[i] = CRGB::HotPink;

  // Example 5: set color via setRGB
  leds[i].setRGB( 50, 100, 150);
  
 // Example 6    color,  saturation, brightness
  leds[i] = CHSV( 85,       255,           255);
