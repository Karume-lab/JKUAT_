#include "main.hpp"

int printStudent(cls_t stArray[])
{
    for (int i = 0; i < SIZE; i++)
    {
        cout<<endl<<"NAME: "<<stArray[i].Student.firstName<<" "<<stArray[i].Student.surName<<endl;
        cout<<"ADDRESS: "<<stArray[i].Student.address<<endl;
        cout<<"REGISTRATION NUMBER: "<<stArray[i].Student.regNo<<endl;
        cout<<"COURSE ID: "<<stArray[i].Student.courseId<<endl;

        for (int j = 0; j < stArray[i].Student.units.unitNo; j++)
        {
            cout<<stArray[i].Student.units.reg[j]<<": ";
            cout<<stArray[i].Student.units.marks[j]<<endl;
        }

        cout<<"TOTAL MARKS: "<<stArray[i].Student.units.totalMarks<<endl;
        cout<<"MEAN: "<<stArray[i].Student.units.mean<<endl;
        cout<<"GRADE: "<<stArray[i].Student.units.grade<<endl<<endl;
        
    }
    return (0);
}