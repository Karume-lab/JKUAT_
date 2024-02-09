#include "main.hpp"

int computeGrade(cls_t stArray[])
{
    int i;

    for (i = 0; i < SIZE; i++)
    {
        if (stArray[i].Student.units.mean >= 70)
            stArray[i].Student.units.grade = 'A';
        else if (stArray[i].Student.units.mean > 59)
            stArray[i].Student.units.grade = 'B';
        else if (stArray[i].Student.units.mean > 49)
            stArray[i].Student.units.grade = 'C';
        else if (stArray[i].Student.units.mean > 39)
            stArray[i].Student.units.grade = 'D';
        else
            stArray[i].Student.units.grade = 'E';    
    }
    
    return (0);
}