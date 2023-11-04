#include "main.hpp"

int findLowest(cls_t stArray[])
{
    stArray->low = stArray[0].Student.units.mean;
    int i;
    
    for (i = 1; i < SIZE; i++)
    {
        if (stArray->low > stArray[i].Student.units.mean)
            stArray->low = stArray[i].Student.units.mean;
    }

    return (0);
}