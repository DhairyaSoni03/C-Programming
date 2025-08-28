#include<stdio.h>
void main()
{
	int amt=5000;
	int withdrawal_amt , choice ;
	do
	{
		printf("\nTotal balance = %d\n1-Withdraw\n0-Exit\nEnter choice:",amt);
		scanf("%d",&choice);

		switch(choice)
		{
			case 1:
				printf("Enter the withdrawl amount: ");
				scanf("%d",&withdrawal_amt);

				if(amt<withdrawal_amt)
				{
					printf("Insufficient Balance in Account!\n");
				}
				else if(withdrawal_amt<0)
				{
					printf("Negative Transaction!\nTry Again.\n");
				}
				else if(amt-withdrawal_amt<1000)
				{
					printf("Cannot proceed!\nThere should remain Rs1000 as balance.\n");
				}
				else
				{
					printf("Tansaction Completed.\n");
					amt-=withdrawal_amt;
				}
				break;

			case 0:
				printf("Exiting....\nPress any key to exit.");
				break;

			default:
				printf("Invalid Choice!\n");
				break;

		}
	}
	while(choice!=0);

}
