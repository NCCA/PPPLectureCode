#include <stdio.h>
#include <stdlib.h>

int main()
{
 	double d=1.0;
 	float f=1.0;
	int i=0;
 	char c='c';
 	printf("i address is %p \n",&i);
	printf("c address is %p \n",&c);
	printf("d address is %p \n",&d);
	printf("f address is %p \n",&f);

	return EXIT_SUCCESS;
}
