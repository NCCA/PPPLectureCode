#include <stdio.h>
#include <stdlib.h>

int main()
{
	char XO[][3]={
									{'-','-','-'},
									{'-','-','-'},
									{'-','-','-'},
							 };


  XO[1][2]='O';

  for(int y=0; y<3; ++y)
  {
  	for(int x=0; x<3; ++x)
  	{
  		printf("%c ",XO[y][x]);
  	}
  printf("\n");
  }

	return EXIT_SUCCESS;
}
