#include <GL/glut.h>

#include "../include/global.h"
#include "../include/parameter.h"

#include "../include/motion.h"

void motion( int x , int y ) {

   static GLint savepoint[2];

   glEnable(GL_COLOR_LOGIC_OP);
   glLogicOp(GL_INVERT);

   glBegin(GL_LINES);

   if(rubberband){
      glVertex2iv(point[pointnum-1]);
      glVertex2iv(savepoint);
   }

   glVertex2iv(point[pointnum-1]);
   glVertex2i(x,y);

   glEnd();

   glFlush();

   glLogicOp(GL_COPY);
   glDisable(GL_COLOR_LOGIC_OP);

   savepoint[0]=x;
   savepoint[1]=y;

   rubberband=1;

}
