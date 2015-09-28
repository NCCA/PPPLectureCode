#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
  float a,b;
  scanf("%f %f",&a,&b);
  if( b >0.0)
  {
    printf("%f\n",a/b);
  } // end zero check
  else
  { 
    printf("poss div by zero\n");
  } 

}