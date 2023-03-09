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

    cout<<endl<<"CLASS"<<endl<<endl;
    // cout<<"STANDARD DEVIATION: "<<stdArray->dev<<endl;
    cout<<"LOWEST MARK: "<<stdArray->low<<endl;
    cout<<"HIGHEST MARK: "<<stdArray->high<<endl;
    cout<<"CLASS MEAN: "<<stdArray->mean<<endl;

    return (0);
}