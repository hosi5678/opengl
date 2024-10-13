#include <GL/glut.h>
#include <stdlib.h>

#include "./opengl_sub_dir/include/parameter.h"
#include "./opengl_sub_dir/include/display.h"
#include "./opengl_sub_dir/include/init.h"
#include "./opengl_sub_dir/include/resize.h"
#include "./opengl_sub_dir/include/mouse.h"
#include "./opengl_sub_dir/include/motion.h"
#include "./opengl_sub_dir/include/keyboard.h"

int main(int argc,char **argv){

   glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE | GLUT_DEPTH);   
   glutCreateWindow(argv[0]);
   glutDisplayFunc(display);
   glutReshapeFunc(resize);
   glutMouseFunc(mouse);
   glutMotionFunc(motion);
   glutKeyboardFunc(keyboard);
   init();
   glutMainLoop();
   return 0;
}
