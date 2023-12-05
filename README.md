# epaper-driver

Create screen object with current breadboard pins
myScreen(eScreen_EPD_EXT3_213, breadBoardBreakout);

drawText(int x, int y, int fontSize, String msg, String color = "black");
- x = x pixel location of text
- y = y pixel location of text
- fontSize = size of text, 1-4 where 1 is smallest and 4 is biggest
- msg = text to display
- color = color of text, black by default. Specify "red" for red text
