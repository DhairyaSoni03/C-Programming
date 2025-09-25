#include <stdio.h>
#include <unistd.h>

void main()
{
    int minutes=0;
    float distance=0;
    printf("Welcome to Marathon.\n");
    while (1)
    {
        printf("Minute %d : Distance Covered : %.1f km\n",minutes,distance);
        distance = distance + 0.5;
        minutes++;
        sleep(1);
        if(distance>10)
        {
            break;
        }
    }
    printf("Marathon Complete!\n");
    }
