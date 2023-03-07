#include "main.hpp"

int findHighest(cls_t stArray[])
{
    float high = stArray[0].Student.units.mean;
    int i;
    
    for (i = 1; i < SIZE; i++)
    {
        if (high < stArray[i].Student.units.mean)
            high = stArray[i].Student.units.mean;
    }
    

    return (0);
}
