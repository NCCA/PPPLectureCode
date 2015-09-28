#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n=4;

	printf("%d ",--n);
	printf("%d\n",n);

	n=4;
	printf("%d ",n--);
	printf("%d\n",n);

	return EXIT_SUCCESS;

}
