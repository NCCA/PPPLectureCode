/// under mac __APPLE__ is defined by the compiler so we can check
/// this to get the correct includes for OpenGL
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

// function to init the basic OpenGL scene for this demo
void initOpenGL();
// function to render our scene.
void draw();

int main()
{
  // create our SDLWindow
  SDLOpenGL win("Win",0,0,720,576);
  // this makes sure the window is active for OpenGL calls, if we have
  // more than one window we need to call this for the window we want to
  // set OpenGL for
  win.makeCurrent();
  // setup our default OpenGL window state
  initOpenGL();

  bool quit=false;
  while(!quit)
  {
    SDL_Event event;
    // grab the event from the window (note this explicitly calls make current)
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
          // make OpenGL draw wireframe
          case SDLK_w : glPolygonMode(GL_FRONT_AND_BACK,GL_LINE); break;
          // make OpenGL draw solid
          case SDLK_s : glPolygonMode(GL_FRONT_AND_BACK,GL_FILL); break;
          default : break;
        } // end of key process
      } // end of keydown

      default : break;
    } // end of event switch
   // draw scene
   draw();
   // update the buffer so we can see what we have drawn.
   win.swapWindow();
  }

  return EXIT_SUCCESS;
}

void initOpenGL()
{
  // this sets the background colour
  glClearColor(0.8,0.8,0.8,1.0);
  // this is how big our window is for drawing
  glViewport(0,0,720,576);
  // set up perspective projection
  glMatrixMode(GL_PROJECTION);
  gluPerspective(45.0f,720.0/576.0,0.1f,200.0f);
  // setup camera
  glMatrixMode(GL_MODELVIEW);
  gluLookAt(2,2,2,0,0,0,0,1,0);
  // enable lights
  glEnable(GL_LIGHTING);
  glEnable(GL_LIGHT0);
  // this makes the material track the current colour
  glEnable(GL_COLOR_MATERIAL);

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
