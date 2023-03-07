#include "main.hpp"

int getData(cls_t stArray[])
{
    int i, j;

    for (i = 0; i < SIZE; i++)
    {
        cout<<"Enter the first name: "<<endl;
        cin>>stArray[i].Student.firstName;
        cout<<"Enter the surname: "<<endl;
        cin>>stArray[i].Student.surName;
        cout<<"Enter the address: "<<endl;
        cin>>stArray[i].Student.address;
        cout<<"Enter the registration number: "<<endl;
        cin>>stArray[i].Student.regNo;
        cout<<"Enter the course ID: "<<endl;
        cin>>stArray[i].Student.courseId;
        cout<<"Enter the number of units: "<<endl;
        cin>>stArray[i].Student.units.unitNo;

        for (j = 0; j < stArray[i].Student.units.unitNo; j++)
        {
            cout<<j+1<<")"<<"Enter the unit name"<<endl;
            cin>>stArray[i].Student.units.reg[j];
            cout<<j+1<<") "<<"Enter the marks for "<<stArray[i].Student.units.reg[j]<<endl;
            cin>>stArray[i].Student.units.marks[j];
        }
    }

    return (0);
}