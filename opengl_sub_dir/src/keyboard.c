#include <GL/glut.h>

#include "../include/keyboard.h"

void keyboard(unsigned char key,int x,int y){

   switch (key)
   {
   case 'q':
      /* code */
   case 'Q':
   case '\033':
   exit(1);
   break;
   
   default:
      break;
   }

}
