#include <iostream>
#include <math.h>
#define SIZE 10

using namespace std;

typedef struct Unit
{
    int unitNo;
    string reg[15];
    float marks[15];
    float totalMarks;
    float mean;
    char grade;
}unt_t;

typedef struct Student
{
    string firstName;
    string surName;
    string address;
    string regNo;
    string courseId;
    unt_t units;
}std_t;

typedef struct Class
{
    std_t Student;
    float mean;
    float high;
    float low;
    float dev;
}cls_t;


int getData(cls_t stArray[]);
int computeMean(cls_t stArray[]);
int computeGrade(cls_t stArray[]);
int allMean(cls_t stdArray[]);
int findHighest(cls_t stArray[]);
int findLowest(cls_t stArray[]);
int stdDev(cls_t stArray[]);
int printStudent(cls_t stArray[]);
