/*
TOUPPER(3) (simplified)

NAME
    toupper -- lower case to upper case letter conversion
SYNOPSIS
    int toupper(int c);
DESCRIPTION
    The toupper() function converts a lower-case letter to the corresponding upper-case letter. The argument must be representable as an unsigned char or the value of EOF.
RETURN VALUES
    If the argument is a lower-case letter, the toupper() function returns the corresponding upper-casse letter if there is one; otherwise, the argument is returned unchanged.
    */

#include <libft.h>

int toupper(int c)
{
    if (c > 96 && c < 123)
    {
        return c - 32;
    }
    return c;
}

// if (c >= 'a' && c <= 'z')
// {
//     return c - ('a' - 'A');  // Equivalent to c - 32
// }
