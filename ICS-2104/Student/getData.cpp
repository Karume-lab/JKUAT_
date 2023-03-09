#include "main.hpp"


int getData(cls_t stArray[])
{
    int i, j;

    for (i = 0; i < SIZE; i++)
    {
        cout<<"DETAILS FOR STUDENT # "<< i+1 <<endl<<endl;
        cout<<"Enter the first name: ";
        cin>>stArray[i].Student.firstName;
        cout<<"Enter the surname: ";
        cin>>stArray[i].Student.surName;
        cout<<"Enter the address: ";
        cin>>stArray[i].Student.address;
        cout<<"Enter the registration number: ";
        cin>>stArray[i].Student.regNo;
        cout<<"Enter the course ID: ";
        cin>>stArray[i].Student.courseId;
        cout<<"Enter the number of units: ";
        cin>>stArray[i].Student.units.unitNo;

        for (j = 0; j < stArray[i].Student.units.unitNo; j++)
        {
            cout<<j+1<<") "<<"Enter the unit name: ";
            cin>>stArray[i].Student.units.reg[j];
            cout<<" Enter the marks for "<<stArray[i].Student.units.reg[j]<<" :";
            cin>>stArray[i].Student.units.marks[j];
        }
    }

    return (0);
}