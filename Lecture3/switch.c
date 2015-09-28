#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("please enter y or n\n");
	char answer;
	scanf("%c",&answer);
	
		switch(answer)
		{

		case 'y' :
		case 'Y' :
		{
			int i=0;
			printf("you pressed y %d\n",i);
		
		break;
		}
		case 'n' :
		case 'N' :
		{
			int i=10;
		  printf("you pressed n %d\n",i);
		
		break;
		}
		default :
			printf("you pressed %c\n",answer);

		break;

		}

exit(EXIT_SUCCESS);


}