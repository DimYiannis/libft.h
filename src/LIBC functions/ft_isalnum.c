/*
ISALNUM(3) (simplified)

NAME
    isalnum -- alphanumeric character test
SYNOPSIS
    int isalnum(int c)
DESCRIPTION
    The isalnum() function tests for any character for which isalpha(3) or isdigit(3) is true. The value of the argument must be representable as an unsigned char or the value of EOF.
RETURN VALUES
    The isalnum() function returns zero if the character tests false and returns non-zero if the character tests true.
*/

#include "libft.h"

int ft_isalnum(int c)
{
    // checks if c is uppercase or lowercase
    if (ft_isalpha(c) || ft_isdigit(c))
    {
        return c;
    }
    return 0;
}