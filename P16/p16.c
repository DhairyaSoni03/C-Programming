#include<stdio.h>
int main()
{
	const int tsticks = 21;
	int upick,cpick,tupick=0,tcpick=0,tpick=0,c,r=1;
	printf("Total Match Sticks: %d",tsticks);
	while(1)
	{
		if(tpick<(tsticks-1))
		{
			r1:
			printf("\nAvailable pick 1,2,3 or 4");
			printf("\nEnter your Pick : ");
			scanf("%d",&upick);
			if(upick<=4)
			{
				tupick+=upick;
				cpick=5-upick;
				printf("Computer's Pick : %d\n",cpick);
				tcpick+=cpick;
				tpick=tupick+tcpick;
			}
			else
			{
				printf("Invalid Pick Error!\n");
				goto r1;
			}
		}
		else
		{
			r2:
			printf("\nAvailable Pick 1");
			printf("\nEnter your Pick : ");
			scanf("%d",&upick);
			if(upick==1)
			{
				tupick+=upick;
				tpick+=upick;
				break;
			}
			else
			{
				printf("Invalid Pick Error!\n");
				goto r2;
			}
		}
	}
	if((tupick-tcpick)==1)
	{
		printf("\nComputer wins!\n");
	}
	else
	{
		printf("\nUser wins!\n");
	}
	return 0;
}
