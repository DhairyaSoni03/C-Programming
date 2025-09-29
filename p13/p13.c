#include <stdio.h>

int main() 
{
    int water_level = 0;
    int max_capacity = 100;
    int refill_rate = 10;

    while (water_level < max_capacity) 
    {
        water_level += refill_rate;
        if (water_level >= max_capacity) 
        {
            printf("Tank is full.\n");
            break;
        }
        printf("Current water level: %d liters\n", water_level);
    }

    return 0;
}

