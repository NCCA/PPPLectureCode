#ifdef __APPLE__
  #include <OpenGL/gl.h>
  #include <OpenGL/glu.h>
#else
  #include <GL/gl.h>
  #include <GL/glu.h>
#endif

#include <iostream>
#include <cstdlib>
#include "SDLOpenGL.h"

void draw();

int main()
{
  std::cout<<"SDLOpenGL"<<std::endl;
  SDLOpenGL win("Win",0,0,720,576);

  glClearColor(0.8,0.8,0.8,1.0);
  glViewport(0,0,720,576);
  glMatrixMode(GL_PROJECTION);
  gluPerspective(45.0f,720.0/576.0,0.1f,200.0f);
  glMatrixMode(GL_MODELVIEW);
  gluLookAt(2,2,2,0,0,0,0,1,0);

  glEnable(GL_LIGHTING);
  glEnable(GL_LIGHT0);
  glEnable(GL_COLOR_MATERIAL);
  win.makeCurrent();
  bool quit=false;
  while(!quit)
  {
    SDL_Event event;
    win.pollEvent(event);
    switch (event.type)
    {
      // this is the window x being clicked.
      case SDL_QUIT : quit = true; break;
      // now we look for a keydown event
      case SDL_KEYDOWN:
      {
        switch( event.key.keysym.sym )
        {
          // if it's the escape key quit
          case SDLK_ESCAPE :  quit = true; break;
          case SDLK_w : glPolygonMode(GL_FRONT_AND_BACK,GL_LINE); break;
          case SDLK_s : glPolygonMode(GL_FRONT_AND_BACK,GL_FILL); break;
          default : break;
        } // end of key process
      } // end of keydown

      default : break;
    } // end of event switch

   draw();

    win.swapWindow();
  }

  return EXIT_SUCCESS;
}

void draw()
{
  static float rot=0.0f;
  glClear(GL_COLOR_BUFFER_BIT);
  glPushMatrix();
  glRotatef(rot++,0,1,0);
    glBegin(GL_TRIANGLES);
      glColor3f(1.0f,0.0f,0.0f);
      glVertex3f(-1.0f,-0.5f,0.0f);
      glColor3f(0.0f,1.0f,0.0f);
      glVertex3f(0.0f,1.0f,0.0f);
      glColor3f(0.0f,0.0f,1.0f);
      glVertex3f(1.0f,-0.5f,0.0f);
    glEnd();
  glPopMatrix();
}
