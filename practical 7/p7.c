#include<stdio.h>
#define ticket 150
int main()
{
    int age;
    printf("Age of visitor is:");
    scanf ("%d",&age);
    if (age<15)
    {
       printf("visitor has free entry");
    }

    else
    {
        printf("price visitor has to pay for entry is%d",ticket);

    }
    return 0;
}


