#include<stdio.h>
int main()
{
    long int p=1441981744;
    float pw=48.4;
    float lro=85.95;
    float lrm=80.95;
    float lrw=62.84;
    long int w=pw*p/100;
    long int m=p-w;
    long int lm=lrm*m/100;
    long int lw=lrw*w/100;
    long int ILM=m-lm;
    long int ILW=w-lw;
    printf("Illiterate men are %ld",ILM);
    printf("\nIlliterate women are %ld",ILW);

    return 0;

}
