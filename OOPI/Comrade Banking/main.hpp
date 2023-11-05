#ifndef _MAIN_HPP_
#define _MAIN_HPP_

#include <iostream>
#include <stdlib.h>
#include <math.h>

#define RATE 0.16
using namespace std;

typedef struct student
{
    char name[255];
    char regNo[100];
    float prc;
    char choice;
    int yrs;
    struct student* next;

}std_t;

std_t* appendStd(std_t** head);
void getData(std_t* ptr);
int getChoice(std_t*  ptr);
float arithmetic(std_t* ptr);
int output(std_t* ptr);

#endif

