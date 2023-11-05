#include <stdio.h>
#include <stdlib.h>


typedef struct Course
{
    char course_code[20];
    char course_name[50];
}crs_t;


typedef struct Grade
{
    int mark;
    char grade;
}grd_t;

typedef struct Student
{
    char name[50];
    char regNo[20];
    int age;
    crs_t crs;
    grd_t grade;
}std_t;

int getDetails(std_t students[]);
int main(void)
{
    std_t students[40];
    // getDetails(students);
    int n;
    printf("Enter the number of students to be input: \n");
    scanf("%d", &n);    

    for (int i = 0; i < n; i++)
    {
        std_t *newStudent = (std_t *) malloc(sizeof(std_t)*n);

        if (newStudent == NULL )
        {
            printf("Unable to allocate memory for *newStudent!\n");
            return (-1);
        }
        printf("STUDENT %d OUT OF %d\n", i+1, n);
        printf("Enter the student's name: \n");
    }

    return (0);
}

int getDetails(std_t students[])
{
    int n;
    printf("Enter the number of students to be input: \n");
    scanf("%d", &n);    

    for (int i = 0; i < n; i++)
    {
        std_t *newStudent = (std_t *) malloc(sizeof(std_t)*n);

        if (newStudent == NULL )
        {
            printf("Unable to allocate memory for *newStudent!\n");
            return (-1);
        }
        printf("STUDENT %d OUT OF %d\n", i+1, n);
        printf("Enter the student's name: \n");
        scanf("%s", newStudent->name);
        printf("Enter the student's registration number: \n");
        scanf("%s", newStudent->regNo);
        printf("Enter the student's age: \n");
        scanf("%d", &newStudent->age);
        printf("Enter the course name: \n");
        scanf("%s",newStudent->crs.course_name);
        printf("Enter the course code: \n");
        printf("%s", newStudent->crs.course_code);
        scanf("%s", newStudent->crs.course_code);
        printf("Enter the mark: \n");
        scanf("%d", &newStudent->grade.mark);
        printf("\n\n");
        
        if ((newStudent->grade.mark) > 69)
            newStudent->grade.grade = 'A';
        else if ((newStudent->grade.mark) > 59)
            newStudent->grade.grade = 'B';
        else if ((newStudent->grade.mark) > 49)
            newStudent->grade.grade = 'C';
        else if ((newStudent->grade.mark) > 39)
            newStudent->grade.grade = 'D';
        else
            newStudent->grade.grade = 'E';

        students[i] = *newStudent;
    }

    return (0);
}