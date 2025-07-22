#include<stdio.h>
#include<math.h>
int main()
{
float weight, height, BMI;
printf( "enter value of weight:");
scanf( "%f",&weight);
printf(" enter value of height:");
scanf("%f",&height);
if(weight>0&&height>0)
{
    BMI = weight/pow(height, 2);
    if(BMI<18.5)
    {
        printf("you are under weight");
    }
    else if(BMI>=18.5&&BMI<24.9)
    {
        printf("You are healthy weight");
    }
    else
    {
        printf("you are overweight");
    }
}
else
{
    printf("The entered value is invalid");
    return 0;
}

printf(" your BMI is :%.2f", BMI);
 return 0;
}
