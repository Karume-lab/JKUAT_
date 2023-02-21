#include <iostream>

using namespace std;

float findCharges(float units);
int main(void)
{
    char name[255];
    float units;

    printf("Enter your name: ");
    cin.getline(name, 255);
    printf("Enter the number of units: ");
    scanf("%f", &units);

    cout<<"NAME: "<< name <<endl;
    cout<<"TOTAL CHARGES: "<< findCharges(units) <<endl;

    return (0);
}

float findCharges(float units)
{
    float charges;

    while (units < 0)
    {
        printf("INVALID NUMBER OF UNITS!\n");
        printf("Enter the number of units: ");
        scanf("%f", &units);
    }
    
    if (units == 0)
        charges = 50;
    else if (units < 100)
        charges = units * 60;
    else if (units >= 100)
        charges = (100 * 60) + ((units - 100) * 80);
    else if (units > 300)
        charges = (100 * 60) + ((units - 100) * 80) + ((units - 200) * 90);
    
    if (charges < 50)
        charges = 50;

    if (charges > 300)
        charges = charges * 1.15;
    
    return (charges);
}



