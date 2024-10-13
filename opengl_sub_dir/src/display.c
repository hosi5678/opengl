#include <GL/glut.h>

#include "../include/global.h"
#include "../include/cube.h"

#include "../include/display.h"

void display(void){
 static int r = 0; /* 回転角 */

  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

  /* 光源の位置設定 */
  glLightfv(GL_LIGHT0, GL_POSITION, light0pos);
  glLightfv(GL_LIGHT1, GL_POSITION, light1pos);

  /* モデルビュー変換行列の保存 */
  glPushMatrix();

  /* 図形の回転 */
  glRotated((double)r, 0.0, 1.0, 0.0);

  /* 図形の色 (赤) */
  glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE, red);

  /* 図形の描画 */
  cube();

  /* 二つ目の図形の描画 */
  glPushMatrix();
  glTranslated(1.0, 1.0, 1.0);
  cube();
  glPopMatrix();

  /* モデルビュー変換行列の復帰 */
  glPopMatrix();

  glutSwapBuffers();

  /* 一周回ったら回転角を 0 に戻す */
  if (++r >= 360) r = 0;
  
  }
