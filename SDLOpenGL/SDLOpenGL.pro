# name of exe program
TARGET=SDLOpenGL
# where to put compiled files
OBJECTS_DIR=obj
# where our source files are
SOURCES += $$PWD/src/main.cpp \
           $$PWD/src/SDLOpenGL.cpp

HEADERS += $$PWD/include/SDLOpenGL.h
# turn on C++ 11
CONFIG+=c++11
CONFIG+=opengl
# tell the compiler where project
# includes are
INCLUDEPATH+=$$PWD/include
# add to the cpp flags sdl2-config output
QMAKE_CXXFLAGS += $$system(sdl2-config --cflags)
LIBS+=$$system(sdl2-config --libs)
linux:LIBS+= -lGLU

macx:QMAKE_MAC_SDK = macosx10.11
macx:LIBS+= -framework OpenGL
macx:CONFIG -= app_bundle









