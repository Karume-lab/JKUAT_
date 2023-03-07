#include "main.hpp"

int stdDev(cls_t stArray[])
{
    float sum =0, dev, disc;
    int i;

    for (i = 0; i < SIZE; i++)
    {
        disc = stArray[i].Student.units.mean - stArray->mean;
        sum += disc;
    }

    disc = sum/SIZE;
    dev = sqrt(disc);

    stArray->dev = dev;
    
    return (0);
}