#include "main.hpp"

/**
 * ouput - Presents the data output in the desired manner
 * @ptr: The node whose values are used
 * Returns (0) on success and a non-zero integer on failure
*/
int output(std_t* ptr)
{
    printf("\nNAME: %s\n", ptr->name);
    printf("REGISTRATION NUMBER: %s\n", ptr->regNo);
    printf("____________________________________________\n");
    printf("Accrued amount: %.2f\n", arithmetic(ptr));
    printf("Principle: %.2f\n", ptr->prc);
    printf("Interest earned: %.2f\n", (arithmetic(ptr) - ptr->prc));
    return (0);
}


