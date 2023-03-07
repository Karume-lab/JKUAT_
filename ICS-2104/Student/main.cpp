#include "main.hpp"

cls_t stdArray[SIZE];

int main (void)
{
    getData(stdArray);
    computeMean(stdArray);
    computeGrade(stdArray);
    findHighest(stdArray);
    findLowest(stdArray);
    stdDev(stdArray);
    allMean(stdArray);
    printStudent(stdArray);  

    return (0);
}
