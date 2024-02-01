///
/// @file Example_Fast_Line.ino
/// @brief Example of features for basic edition
///
/// @details Library for Pervasive Displays EXT3 - Basic level
///
/// @author Rei Vilo
/// @date 20 Mar 2023
/// @version 607
///
/// @copyright (c) Rei Vilo, 2010-2023
/// @copyright Creative Commons Attribution-ShareAlike 4.0 International (CC BY-SA 4.0)
///
/// @see ReadMe.txt for references
/// @n
///

// Screen
#include "PDLS_EXT3_Basic_Fast.h"

// SDK
// #include <Arduino.h>
#include "hV_HAL_Peripherals.h"

// Include application, user and local libraries
// #include <SPI.h>

// Configuration
#include "hV_Configuration.h"

// Set parameters
#define DISPLAY_FAST_LINE 1

// Define structures and classes

// Define variables and constants
Screen_EPD_EXT3_Fast myScreen(eScreen_EPD_EXT3_271_09_Fast, boardRaspberryPiPico_RP2040);

// Prototypes

// Utilities
///
/// @brief Wait with countdown
/// @param second duration, s
///
void wait(uint8_t second)
{
    for (uint8_t i = second; i > 0; i--)
    {
        Serial.print(formatString(" > %i  \r", i));
        delay(1000);
    }
    Serial.print("         \r");
}

// Functions
///
/// @brief Flush screen and display time
///
void flush_ms()
{
    uint32_t chrono = (uint32_t)millis();
    myScreen.flush();
    Serial.print(millis() - chrono);
    Serial.println(" ms");
}

#if (DISPLAY_FAST_LINE == 1)
void displayFastLine()
{
    myScreen.setOrientation(7);

    uint16_t x, y, dx, dy;
    int32_t value = 128;

    x = myScreen.screenSizeX();
    x -= (x % 32);
    y = myScreen.screenSizeY();
    dx = x / 5;
    dy = y / 5;

    myScreen.selectFont(myScreen.fontMax());
    myScreen.gText(0, 0, "Line");

    myScreen.flush();

    myScreen.setPenSolid(true);
    uint32_t chrono;
    for (uint16_t index = 0; index < x; index += 32)
    {
        myScreen.dRectangle(index, dy, 32, dy * 4, myColours.grey);
        chrono = millis();
        myScreen.flush();
        Serial.println(formatString("%i - %i = %i", chrono, millis(), millis() - chrono));
    }
}

#endif // DISPLAY_FAST_LINE

// Add setup code
///
/// @brief Setup
///
void setup()
{
    Serial.begin(115200);
    delay(500);
    Serial.println();
    Serial.println("=== " __FILE__);
    Serial.println("=== " __DATE__ " " __TIME__);
    Serial.println();

    Serial.print("begin... ");
    myScreen.begin();
    Serial.println(formatString("%s %ix%i", myScreen.WhoAmI().c_str(), myScreen.screenSizeX(), myScreen.screenSizeY()));

#if (DISPLAY_FAST_LINE == 1)

    Serial.println("DISPLAY_FAST_LINE... ");
    myScreen.clear();
    displayFastLine();
    wait(4);

#endif // DISPLAY_FAST_LINE

    Serial.println("White... ");
    myScreen.clear();
    flush_ms();

    Serial.println("=== ");
    Serial.println();
}

// Add loop code
///
/// @brief Loop, empty
///
void loop()
{
    delay(1000);
}
