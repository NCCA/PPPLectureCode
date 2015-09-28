#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
  int a;
  double  b;
  
  a=9.0*0.5;
  b=9.0*0.5;
  float c=b;
  printf("%d %f\n",a,b);
  return EXIT_SUCCESS;
}