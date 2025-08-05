#include<stdio.h>
int main()
{
float amount;
float Discount;
float Finalamount;
printf("Enter the total amount");
scanf("%f",&amount);
if (amount<1000)
{
    printf("NO DISCOUNT");
    printf("Total amount is %f\n",amount);

}
else if (amount>=1000 && amount<=5000)
{
    printf("YOU GET 10% DISCOUNT");
   Discount=amount*0.1;
   printf("the discount is%f",Discount);
   Finalamount=amount-Discount;
    printf("Total amount is %f\n",Finalamount);

}
else
{
    printf("YOU GET 20% DISCOUNT");
    Discount=amount*0.2;
     printf("the discount is%f",Discount);
    Finalamount=amount-Discount;
    printf("Total amount is %f",Finalamount);

}
return 0;
}
