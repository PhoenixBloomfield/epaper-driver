# epaper-driver

See example sketch for board setup

Draw text useage:
drawText(int x, int y, int fontSize, String msg, String color)

x = x position
y = y position
fontSize = int between 1 and 4, inclusive
msg = text to be displayed
color = "red" for red text, all other inputs interpreted as black

Known issues:
- I lost my progress after my computer crashed and I lost the more streamlined version I had. This is an earlier working version but it does rely on the drawText function being included in the sketch; I had it working before and I'll have that by Thursday
- Slow refresh time; working on creating faster refresh/flush function
- Partial refresh not yet working
- Limited fonts; after other issues are resolved I will add additional fonts
