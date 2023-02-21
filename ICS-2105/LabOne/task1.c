#include <stdio.h>
#include <stdlib.h>

int summation(int n, int *numList);
int maximum(int n, int *numList);

/**
 * main - Entry point
 * 
 * Returns (0) on success and non-zero on failure
*/
int main(void)
{
    //Finding n-->The size of the memory to be allocated
    int n;
    printf("How many numbers? ");
    scanf("%d", &n);

    //Creating a memory block to store the integers
    int *numList = (int *) malloc(sizeof(int) * n);
    
    // Cheking if the pointer numList was created successfully
    if (numList == NULL )
        return (-1);

    //Obtaining the numbers and storing them in the allocated memory block
    for (int i = 0; i < n; i++)
    {    
        printf("Enter a number and press enter: \n");
        scanf("%d", numList+i);
    }

    //The outuput
    printf("The sum is --> %d\n", summation(n, numList));
    printf("The largest number is --> %d\n", maximum(n, numList));

    //Free the memory which was allocated to the pointer numList
    free(numList);

    return (0);
}


/**
 * summation - Finds the sum of integers in an array of size n
 * @n: The size of the array
 * @*numList: The array containing the numbers
 * Returns sum - the summation of all the integers in the array
*/
int summation(int n, int *numList)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += *(numList + i);
    
    return (sum);
}

/**
 * maximum - Finds the largest number of n integers
 * @n: The size of the array
 * @*numList: The array containing the numbers
 * Returns the max - largest integer
*/
int maximum(int n, int *numList)
{
    int max = *numList;

    //i is starting at 1 and not 0 because index 0 is already assigned as max...skip one comparison
    for (int i = 1; i < n; i++)
    {
        if (*(numList + i) > max)
        {
            max = *(numList + i);
        }
    }
    return (max);   
}