/*
ISDIGIT(3) (simplified)

NAME
    isdigit -- decimal-digit character test
SYNOPSIS
    int isdigit(int c)
DESCRIPTION
    The isdigit() function tests for a decimal digit character.
    The value of the argument must be representable as an unsigned char or the value of EOF.
RETURN VALUES
    The isdigit() function return zero if the character tests false and return non-zero if the character tests true.
*/

#include "libft.h"

int ft_isdigit(int c)
{
    // checks if c is uppercase or lowercase
    if (c >= 48 && c <= 57)
    {
        return c;
    }
    return 0;
}