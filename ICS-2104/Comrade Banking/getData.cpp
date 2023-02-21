#include "main.hpp"

/**
 * getData - Handles all the values obtained from the console
 * @*ptr: The memory location where the values which will be input are stored
 *         Memory is dynamically allocated for the 'container'
 * Does not return anything
*/
void getData(std_t* ptr)
{
    printf("WELCOME TO COMRADE BANKING!!!\n");
    printf("Enter your name: ");
    cin.getline(ptr->name, 255);
    printf("Enter your registration number: ");
    cin.getline(ptr->regNo, 100);
}


