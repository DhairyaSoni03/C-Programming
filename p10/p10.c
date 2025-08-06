#include<stdio.h>
int main()
{
 int choice;
 int quantity;
 int totalcost;
 const burger=150;
 const pizza=200;
 const pasta=120;
 const sandwich=100;
 const frenchfries=80;
 printf("Enter 1 for burger\n");
 printf("Enter 2 for pizza\n");
 printf("Enter 3 for pasta\n");
 printf("Enter 4 for sandwich\n");
 printf("Enter 5 for french fries\n");
 printf("Enter your choice");
 scanf("%d",&choice);

 switch(choice)
 {
 case 1:
     printf("you order is burger\n");
     printf("price of burger is 150\n");
     printf("Enter quantity");
     scanf("%d",&quantity);
     totalcost=(burger*quantity);
     printf("your total cost is %d\n",totalcost);
     break;
case 2:
     printf("you order is pizza\n");
     printf("price of burger is 200\n");
     printf("Enter quantity");
     scanf("%d",&quantity);
     totalcost=(pizza*quantity);
     printf("your total cost is %d\n",totalcost);
    break;
case 3:
     printf("you order is pasta\n");
     printf("price of burger is 120\n");
     printf("Enter quantity");
     scanf("%d",&quantity);
     totalcost=(pasta*quantity);
     printf("your total cost is %d\n",totalcost);
    break;

case 4:
     printf("you order is sandwich\n");
     printf("price of burger is 100\n");
     printf("Enter quantity");
     scanf("%d",&quantity);
     totalcost=(sandwich*quantity);
     printf("your total cost is %d\n",totalcost);
    break;
case 5:
     printf("you order is french fries\n");
     printf("price of burger is 80\n");
     printf("Enter quantity");
     scanf("%d",&quantity);
     totalcost=(frenchfries*quantity);
     printf("your total cost is %d\n",totalcost);
    break;
 }
 return 0;
}
