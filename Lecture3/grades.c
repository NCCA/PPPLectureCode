#include <stdio.h>
#include <stdlib.h>

#define SENTINEL -99

int main()
{
	// initialise values
	int sum=0;
	int grade;
	int count=0;
	// prompt and get first grade
	printf("Enter first Grade or %d to quit\n",SENTINEL);
	scanf("%d",&grade);
	// now loop until we get the sentinel value
	while(grade !=SENTINEL)
	{
		// make running sum
		sum+=grade;
		// get next value
		printf("Enter next Grade or %d to quit\n",SENTINEL);
		scanf("%d",&grade);
		// increment count
		++count;
	}
	// now calculate the average
	printf("Total grades %d average %f \n",count, (float)sum/count);
	return EXIT_SUCCESS;

}