#include <stdio.h>
#include <stdlib.h>

int main()
{
	char a='a';
	printf("%c \n",a);
	a=65; 
	printf("%c \n",a);
  for( unsigned char c=0; c<255; ++c)
    printf("%c",c);
	return EXIT_SUCCESS;
}
