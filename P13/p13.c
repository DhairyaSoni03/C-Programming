#include<stdio.h>
#include<windows.h>
void main()
{
	int i;

	for(i=10;i<=100;i+=10)
	{
		printf("Current Water Level : %d\n",i);
		Sleep(3);
	}
	printf("Tank is Full.");

}

