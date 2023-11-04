#include "main.hpp"

/**
 * appendStudent - Adds a new student at the end
 * @**head: The head pointer of the linked list
 * Returns a pointer to the new student node on success
*/
std_t* appendStd(std_t** head)
{
    if (head == NULL)
    {
        printf("Invalid head pointer!\n");
        return (NULL);
    }

    std_t* ptr = (std_t*) malloc(sizeof(std_t));
    if (ptr == NULL)
    {
        printf("Memory allocation failed!\n");
        return (NULL);
    }

    getData(ptr);

    if (*head == NULL)
    {
        *head = ptr;
        ptr->next = NULL;
        return (ptr);
    }

    std_t* trav = *head;
    while (trav->next != NULL)
        trav = trav->next;
    
    trav->next = ptr;
    ptr->next = NULL;
    
    return (ptr);
}
