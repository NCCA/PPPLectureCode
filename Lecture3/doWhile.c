
#include <stdio.h>
#include <stdlib.h>

int main()
{

	printf("enter a number \n");
	int num;
	scanf("%d",&num);

	unsigned long int count=0;
	unsigned long int oldNumber=1;
	unsigned long int currentNumber=1;
	unsigned long int nextNumber;
  printf("%ld ",currentNumber);
    	
  do
	{
		printf("%ld ",currentNumber);
 // calculate the next number by adding the
 // current number to the old number
		nextNumber = currentNumber + oldNumber;
		oldNumber = currentNumber;
		currentNumber = nextNumber;
	}while(++count <num);
	
	printf("\n");
	return EXIT_SUCCESS;

}







