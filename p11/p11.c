#include<stdio.h>
int main()
{
    float marks;
    float grade;
    printf("Enter your marks");
    scanf("%f",&marks);
    if (marks<0&& marks>100)
    {
        printf("Invalid marks");
    }
    else if(marks>=90&& marks<100)
    {
        printf("Student got A grade");
    }
    else if(marks>=80&&marks<90)
    {
        printf(" Student got B grade");
    }
    else if(marks>=70&&marks<80)
    {
        printf("Student got C grade");

    }
    else if (marks>=60&&marks<70)
    {
        printf("Student got D grade");

    }
    else if(marks<60&&marks>0)

    {
        printf("Student got F grade");
    }
    else
    {
        printf("invalid marks");
    }
    return 0;
}
