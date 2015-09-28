#include <stdio.h>
#include <stdlib.h>

int main()
{

	int countEmp=0;
	int hours;
	int rate;
	int totalPay=0;

	while(countEmp < 3)
	{
   printf("loop value %d\n",countEmp);
	 printf("Hours> ");
	 scanf("%d",&hours);
	 printf("Rate >");
	 scanf("%d",&rate);
	 int pay=hours*rate;
	 printf("Pay is %d\n",pay);
	 ++countEmp;
	 totalPay+=pay;

	}
	printf("\nAll employees processed %d\n",totalPay);
	return EXIT_SUCCESS;

}
