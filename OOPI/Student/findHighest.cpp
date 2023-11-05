#include "main.hpp"

int findHighest(cls_t stArray[])
{
    stArray->high = stArray[0].Student.units.mean;
    int i;
    
    for (i = 1; i < SIZE; i++)
    {
        if (stArray->high < stArray[i].Student.units.mean)
            stArray->high = stArray[i].Student.units.mean;
    }
    

    return (0);
}
