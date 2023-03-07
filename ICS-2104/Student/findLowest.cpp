#include "main.hpp"

int findLowest(cls_t stArray[])
{
    float low = stArray[0].Student.units.mean;
    int i;
    
    for (i = 1; i < SIZE; i++)
    {
        if (low > stArray[i].Student.units.mean)
            low = stArray[i].Student.units.mean;
    }
    

    return (0);
}