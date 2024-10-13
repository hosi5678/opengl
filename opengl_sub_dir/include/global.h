#ifndef E54AE2CF_1287_4063_89A5_67A45EE0A963
#define E54AE2CF_1287_4063_89A5_67A45EE0A963

#include <GL/glut.h>
#include "parameter.h"

extern GLint point[][2];

extern GLdouble vertex[][3];
extern int edge[][2];

extern int face[][4];

extern GLdouble color[][3];

extern GLdouble normal[][3];

extern GLfloat light0pos[];
extern GLfloat light1pos[];
extern GLfloat green[];
extern GLfloat red[];

extern int pointnum;
extern int rubberband;

#endif /* E54AE2CF_1287_4063_89A5_67A45EE0A963 */

GLint point[MAXPOINTS][2];
int pointnum=0;
int rubberband=0;

GLdouble vertex[][3] = {
  { 0.0, 0.0, 0.0 }, /* A */
  { 1.0, 0.0, 0.0 }, /* B */
  { 1.0, 1.0, 0.0 }, /* C */
  { 0.0, 1.0, 0.0 }, /* D */
  { 0.0, 0.0, 1.0 }, /* E */
  { 1.0, 0.0, 1.0 }, /* F */
  { 1.0, 1.0, 1.0 }, /* G */
  { 0.0, 1.0, 1.0 }  /* H */
};

int edge[][2] = {
  { 0, 1 }, /* ア (A-B) */
  { 1, 2 }, /* イ (B-C) */
  { 2, 3 }, /* ウ (C-D) */
  { 3, 0 }, /* エ (D-A) */
  { 4, 5 }, /* オ (E-F) */
  { 5, 6 }, /* カ (F-G) */
  { 6, 7 }, /* キ (G-H) */
  { 7, 4 }, /* ク (H-E) */
  { 0, 4 }, /* ケ (A-E) */
  { 1, 5 }, /* コ (B-F) */
  { 2, 6 }, /* サ (C-G) */
  { 3, 7 }  /* シ (D-H) */
};

int face[][4] = {
  { 0, 1, 2, 3 }, /* A-B-C-D を結ぶ面 */
  { 1, 5, 6, 2 }, /* B-F-G-C を結ぶ面 */
  { 5, 4, 7, 6 }, /* F-E-H-G を結ぶ面 */
  { 4, 0, 3, 7 }, /* E-A-D-H を結ぶ面 */
  { 4, 5, 1, 0 }, /* E-F-B-A を結ぶ面 */
  { 3, 2, 6, 7 }  /* D-C-G-H を結ぶ面 */
};

GLdouble color[][3] = {
  { 1.0, 0.0, 0.0 },
  { 0.0, 1.0, 0.0 },
  { 0.0, 0.0, 1.0 },
  { 1.0, 1.0, 0.0 },
  { 1.0, 0.0, 1.0 },
  { 0.0, 1.0, 1.0 }
};

GLdouble normal[][3] = {
  { 0.0, 0.0,-1.0 },
  { 1.0, 0.0, 0.0 },
  { 0.0, 0.0, 1.0 },
  {-1.0, 0.0, 0.0 },
  { 0.0,-1.0, 0.0 },
  { 0.0, 1.0, 0.0 }
};

GLfloat light0pos[] = { 0.0, 3.0, 5.0, 1.0 };
GLfloat light1pos[] = { 5.0, 3.0, 0.0, 1.0 };

GLfloat green[] = { 0.0, 1.0, 0.0, 1.0 };

GLfloat red[] = { 0.8, 0.2, 0.2, 1.0 };
