#include "main.hpp"

int allMean(cls_t stArray[])
{
    float sum =0, ave;
    int i;
 
    for (i = 0; i < SIZE; i++)
            sum +=stArray[i].Student.units.mean;
    
    ave = sum/SIZE;

    stArray->mean = ave;

    return (0);
}