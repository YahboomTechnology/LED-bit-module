/**
 * This is a quick demo of the reverse() functionality, which switches the order in which data bytes are sent to the
 * HT16K33, and is very useful if—like me—you wire your matrixes backward + really don’t want to have to redo everything.
 */
#include "HT16K33.h"
#include "Sprite16.h"

HT16K33 matrix = HT16K33();
Sprite16 one = Sprite16(3, 5, 2, 3, 2, 7, 7);
Sprite16 two = Sprite16(3, 5, 2, 5, 4, 2, 7);
Sprite16 three = Sprite16(3, 5, 7, 4, 7, 4, 7);
Sprite16 eight = Sprite16(3, 5, 7, 5, 7, 5, 7);
//Sprite16 one = Sprite16(8, 8, 2, 3, 2, 7, 7);
//Sprite16 two = Sprite16(3, 5, 2, 5, 4, 2, 7);


Sprite16 one1 = Sprite16(8, 8, 1, 2, 4, 72, 144, 32, 192, 0);
Sprite16 one2 = Sprite16(8, 8, 128, 64, 32, 18, 9, 4, 3, 0);


Sprite16 one3 = Sprite16(16, 8, 32769, 16386, 8196, 4680, 2448, 1056, 960, 0);


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
  // write everything the ‘correct’ way around
//  matrix.drawSprite16(one,  3, 1);
//  matrix.write();
//  delay(2000);
  matrix.drawSprite16(one3,  0, 0);
  matrix.write();
  delay(2000);
    // reverse the order of the matrixes, write again
 

}
