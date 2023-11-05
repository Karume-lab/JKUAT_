#include "main.hpp"

int stdDev(cls_t stArray[])
{
    float sum = 0, disc;
    int i;

    for (i = 0; i < SIZE; i++)
    {
        disc = pow((stArray[i].Student.units.mean - stArray->mean), 2);
        sum += disc;
    }

    disc = sum/SIZE;
    stArray->dev = sqrt(disc);
    
    return (0);
}