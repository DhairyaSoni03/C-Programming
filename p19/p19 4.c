#include <stdio.h>

void main()
{
int i,j;
int n=9,rows=((n/2)+1);
int s;
int ch;

printf("Pattern 1\n");
for(i=1;i<=5;i++)
{
    for(j=1;j<=i;j++)
    {
        if(j%2==0)
            printf("0");
        else
            printf("1");
    }
    printf("\n");
}
printf("\nPattern 2\n");
for(i=1;i<=rows;i++)
{
    for(j=1;j<=n;j++)
    {
    if(i==1)
    {
        printf("%d",j);
    }
    else
    {
    if(j==i)
    {
        printf("%d",j);
    }
    else if(j==(n-i+1))
    {
        printf("%d",n-i+1);
    }
    else
    {
        printf(" ");
    }
    }
    }
    printf("\n");
}

printf("\nPattern 3\n");

for(i=5;i>=1;i--)
{
for(s=1;s<=5-i;s++)
{
    printf(" ");
}

for(j=i;j>=1;j--)
{
    printf("%d",j);

}

for(j=2;j<=i;j++)
{
    printf("%d",j);
}
printf("\n");
}

for(i=2;i<=5;i++)
{
for(s=1;s<=5-i;s++)
{
    printf(" ");
}

for(j=i;j>=1;j--)
{
    printf("%d",j);

}

for(j=2;j<=i;j++)
{
    printf("%d",j);
}
printf("\n");
}

printf("\nPattern 4\n");
for(i=1;i<=4;i++)
{
    for(s=1;s<=4-i;s++)
    {
        printf(" ");
    }
    ch='A';
    for(j=1;j<=2*i-1;j++)
    {
        if(j<i)
        {
            printf("%c",ch);
            ch++;
        }
        else if(j==i)
        {
            printf("%c", ch);
        }
        else
        {
            ch--;
            printf("%c",ch);
        }
    }
    printf("\n");
}
    for(i=3; i>=1; i--)
    {
        for(s=1; s<=4-i; s++)
        {
            printf(" ");
        }
        ch='A';
        for(j=1; j<=2*i-1; j++)
        {
            if(j<i)
            {
                printf("%c", ch);
                ch++;
            }
            else if(j==i)
            {
                printf("%c", ch);
            }
            else
            {
                ch--;
                printf("%c", ch);
            }
        }
        printf("\n");
    }


}
