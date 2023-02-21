#include <stdio.h>
#include <stdlib.h>

#define MAX_LEN 100


typedef struct House
{
    char hname[20];
    int hnum;
}hs_t;

typedef struct Person
{
    char name[50];
    int age;
    hs_t nyumba;
}Person;

int main (void)

{
    // Person *p = (Person *) malloc(sizeof(int));
    // if (p == NULL)
    // {
    //     printf("Could not allocate memory for p!\n");
    //     return (-1);
    // }
    
    // scanf("%s", p->name);
    // scanf("%d", &p->age);

    // Person p1 = *p;
    // printf("%d\n", p1.age);
    // printf("%d\n", p->age);

    // Person p1;
    // Person *ptr = (Person *) malloc(sizeof(Person));
    // if (ptr == NULL)
    //     printf("Could not allocate memory for ptr!\n");
    //     return (-1);
    // printf("Enter name: ");
    // scanf("%s", ptr->name);
    // printf("Enter age: ");
    // scanf("%d", &ptr->age);
    // printf("Name --> %s\n", ptr->name);
    // printf("Age --> %d\n", ptr->age);

    // Person p1;
    // scanf("%d", &p1.age);
    // scanf("%s", p1.name);
    // printf("%d\n", p1.age);
    // printf("%s\n", p1.name);
    
    // Person persArr[40];
    // persArr[0].age = 20;
    // persArr[0].name = "dan";
    // persArr[1].age = 25;
    // persArr[1].name = "rumz";
    // scanf("%d", persArr[0].age);
    // scanf("%s", persArr[0].name);
    // printf("%d\n", persArr[1].age);
    // printf("%d\n", persArr[1].age);

    // Person students[40];
    // Person *p1 = (Person *) malloc(sizeof(Person));
    // Person *p2 = (Person *) malloc(sizeof(Person));
    // scanf("%s", p1->name);
    // scanf("%d", &p1->age);
    // scanf("%s", p2->name);
    // scanf("%d", &p2->age);
    // printf("%s\n", p1->name);
    // printf("%d\n", p1->age);
    // printf("%s\n", p2->name);
    // printf("%d\n", p2->age);
    // students[0] = *p1;
    // students[1] = *p2;
    // printf("%s\n", students[0].name);
    // printf("%d\n", students[0].age);
    // printf("%s\n", students[1].name);
    // printf("%d\n", students[1].age); 

    // hs_t *h1 = (hs_t *) malloc(sizeof(hs_t));
    Person p1;
    // if (h1 == NULL )
    // {
    //     printf("Could not allocate memory for h1!\n");
    //     return (-1);
    // }
    // if (p1 == NULL )
    // {
    //     printf("Could not allocate memory for p1!\n");
    //     return (-1);
    // }
    // scanf("%s", h1->hname);
    // scanf("%d", &h1->hnum);

    // p1.nyumba.hname = (char *) malloc(MAX_LEN * sizeof(char));
    
    // if (p1.nyumba.hname == NULL )
    // {
    //     printf("Memory allocation failed!\n");
    //     return(-1);
    // }

    scanf("%[^\n]s", p1.nyumba.hname);
    
    // p1->nyumba->hnum = 2512;
    printf("%s\n", p1.nyumba.hname);
    // free(p1.nyumba.hname);
    // printf("%d\n", h1->hnum);
    // printf("%d\n", p1->nyumba->hnum);
    // printf("%s\n", p1->nyumba->hname);
    return (0);
}