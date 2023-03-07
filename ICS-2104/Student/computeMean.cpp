#include "main.hpp"

int computeMean(cls_t stArray[])
{
    int i, j;
    float sum =0;

    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < stArray[i].Student.units.unitNo; j++)
            sum +=stArray[i].Student.units.marks[j];
        stArray[i].Student.units.mean = sum/stArray[i].Student.units.unitNo;
        stArray[i].Student.units.totalMarks = sum;
        sum =0;
    }
    
    return (0);
}