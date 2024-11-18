/*
FT_ITOA (simplified)

NAME
    ft_itoa -- convert an int to a string
SYNOPSIS
    char *ft_itoa(int n);
DESCRIPTION
    Allocate (with malloc(3)) and returns a string representing n.
    Negative numbers must be handled.
PARAMETERS
    n: int to convert
RETURN VALUES
    ft_itoa() returns the string representing n; NULL if the memory allocation failed.
AUTHORIZED EXTERNAL FUNCTIONS
    malloc(3)
    */

#include "libft.h"

char *ft_itoa(int n)
{

    int sign = 1;
    int len = 0;
    char *str;
    int num = n;

    // check for sign
    if (n < 0)
    {
        sign = -1;
    }

    // Zero case
    if (n == 0)
    {
        str = (char *)malloc(2);
        if (!str)
        {
            return NULL;
        }
        str[0] = '0';
        str[1] = '\0';
        return str;
    }
    // length for allocation
    while (num != 0)
    {
        len++;
        num /= 10;
    }
    if (sign = -1)
    {
        len++;
    }

    // Allocate memory for string + null terminator
    str = (char *)malloc(len + 1);
    if (!str)
    {
        return NULL;
    }

    str[len] = '\0'; // Null-terminate the string

    num = n;
    if (sign == -1)
    {
        num = -num; // Convert to positive for digit extraction
    }

    // Fill the string from the end
    while (num != 0)
    {
        // Convert to character
        str[--len] = (num % 10) + '0';
        num /= 10;
    }

    if (sign == -1)
    {
        str[0] = '-';
    }

    return str;
}