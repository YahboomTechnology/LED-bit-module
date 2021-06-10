/**
 * This is a quick demo of the reverse() functionality, which switches the order in which data bytes are sent to the
 * HT16K33, and is very useful if—like me—you wire your matrixes backward + really don’t want to have to redo everything.
 */
#include "HT16K33.h"
#include "Sprite16.h"

HT16K33 matrix = HT16K33();
Sprite16 zero = Sprite16(5, 7, 14, 17, 25, 21, 19, 17, 14);
Sprite16 one = Sprite16(5, 7, 4, 6, 5, 4, 4, 4, 31);
Sprite16 two = Sprite16(5, 7, 14, 17, 16, 8, 4, 2, 31);
Sprite16 three = Sprite16(5, 7, 14, 17, 16, 12, 16 ,17, 14);
Sprite16 four = Sprite16(5, 7, 8, 12, 10, 9, 31 ,8, 8);
Sprite16 fives = Sprite16(5, 7, 31, 1, 15, 16, 16 ,17, 14);
Sprite16 six = Sprite16(5, 7, 14, 17, 1, 15, 17 ,17, 14);
Sprite16 seven = Sprite16(5, 7, 31, 16, 8, 4, 2 ,2, 2);
Sprite16 eight = Sprite16(5, 7, 14, 17, 17, 14, 17 ,17, 14);
Sprite16 nine = Sprite16(5, 7, 14, 17, 17, 30, 16 ,17, 14);


void setup() 
{
  // start the matrix on I2C address 0x70
  matrix.init(0x70);
  
  // draw some quick identifiers
  //matrix.drawSprite16(one,  3, 1);
  //matrix.drawSprite16(two, 11, 1);
  
}

void loop() 
{
  matrix.drawSprite16(eight,  2, 0);
  matrix.write();
  delay(1000);
 // matrix.clear();

  matrix.drawSprite16(eight,  10, 0);
  matrix.write();
  delay(1000);
 // matrix.clear();
}
