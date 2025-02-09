/*
ISALPHA(3) (simplified)

NAME
    isalpha -- alphabetic character test
SYNOPSIS
    int isalpha(int c)
DECRIPTION
    The isalpha() function tests for any character for which isupper(3) or islower(3) is true. The value of the argument must be resprensentable as an unsigned char or the value of EOF.

RETURN VALUES
    The isalpha() function return zero if the character tests false and returns non-zero if the character tests true.
    */

#include "libft.h"

int ft_isalpha(int c)
{
    //checks if c is uppercase or lowercase
    if (c >= 65 && c<= 90 || c>=97 && c<= 122)
    {
        return c;
    }
    return 0;
}