#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("3 %% 5=%d\n",3%5);
	printf("5 %% 3=%d\n",5%3);
	printf("4 %% 5=%d\n",4%5);
	printf("5 %% 4=%d\n",5%4);
	printf("5 %% 5=%d\n",5%5);
	printf("15 %% 5=%d\n",15%5);
	printf("6 %% 5=%d\n",6%5);
	printf("15 %% 6=%d\n",15%6);
	printf("7 %% 5=%d\n",7%5);
	printf("15 %% -7=%d\n",15%-7);
	printf("8 %% 5=%d\n",8%5);
	printf("15 %% 0=%d\n",15%0);

	return EXIT_SUCCESS;
}
