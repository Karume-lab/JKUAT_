#include "main.hpp"

int main(void)
{
    std_t* head = NULL;
    std_t* std1 = appendStd(&head);
    getChoice(std1);
    output(std1);



    return (0);
}

