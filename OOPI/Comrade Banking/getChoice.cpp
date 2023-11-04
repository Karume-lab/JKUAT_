#include "main.hpp"

/**
 * getChoice - Allows user to choose a account option
 * @*ptr: The memory location where the account option which will be chosen is stored
 *         Memory is dynamically allocated for this 'container'
 * Returns (0) on success and a non-zero integer on failure
*/
int getChoice(std_t*  ptr)
{
    char c;

    printf("\nNAME: %s\n", ptr->name);
    printf("REG NO: %s\n", ptr->regNo);
    printf("____________________________________________\n");
    printf("1. Savings Account\n");
    printf("2. Fixed Deposit Account\n");
    printf("\nPick a banking option: ");
    scanf("%c", &ptr->choice);
    scanf("%c", &c);

    if (ptr->choice == '1' || ptr->choice == '2')
        arithmetic(ptr);        
    else
    {
        while (!(ptr->choice == '1' || ptr->choice == '2'))
        {
            printf("INVALID CHOICE!\n");
            printf("1. Savings Account\n");
            printf("2. Fixed Deposit Account\n");
            printf("Kindly pick a valid option: ");
            scanf("%c", &ptr->choice);
            scanf("%c", &c);
        }
        
    }
    
    printf("Enter the sum of money to be deposited: ");
    scanf("%f", &ptr->prc);
    printf("How long are you planning to deposit (in years): ");
    scanf("%d", &ptr->yrs);
    
    return (ptr->choice);
}
