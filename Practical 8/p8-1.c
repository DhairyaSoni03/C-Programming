#include<stdio.h>
#include<conio.h>
void main()
{
    int age;
    printf("Enter your age");
    scanf("%d",&age);
    if (age<18)
    {
        printf(" NotEligible for opening account");

    }
    else if(age>=18&&age<=59)
    {
        printf("Eligible for regular saving account");

    }
    else
    {
        printf("Eligible for senior citizen account");
    }
}
