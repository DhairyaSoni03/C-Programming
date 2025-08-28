#include<stdio.h>
int main()
{
	int i;
	r:
	printf("Enter starting time:");
	scanf("%d",&i);
	if(i>0)
	{
		while(i>=0)
		{
			printf("\nTime : %d",i);
			Sleep(1000);
			i--;
		}
		printf("\nCountdown Completed!");
	}
	else
	{
		printf("\nInvalid input!\nZero & Negative inputs are not allowed!\n");
		goto r;
	}
	return 0;
}
