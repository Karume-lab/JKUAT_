#include "main.hpp"

/**
 * arithmetic - Computes the required values
 * @*ptr: The particular student whose data is being computed
 * Returns (amnt), the total amount on success and a non-zero integer on failure
*/

float arithmetic(std_t* ptr)
{
    float amt;

    if (ptr->choice == '1')
    {
        amt = ptr->prc + (ptr->prc * ptr->yrs * RATE);
        return (amt);
    }
    else
    {
        amt = ptr->prc + (ptr->prc * (pow((1 + RATE), ptr->yrs)));
        return (amt);
    }
}
