#include <stdio.h>

void main()
{
    int n,actual_sum,ideal_sum;
    printf("Plese enter number of ids to be entered:\n");
    scanf("%d",&n);
    int ids[n];
    ideal_sum=n*(n+1)/2;
    printf("Please enter the ids:\n");
    for(int i=0;i<n-1;i++)
    {
        scanf("%d",&ids[i]);
    }
    actual_sum=0;
    for(int i=0;i<n-1;i++)
    {
        actual_sum+=ids[i];
    }
    printf("Missing ID is: %d\n",ideal_sum-actual_sum);

}
