// TOLOWER(3) (simplified)

// NAME
//     tolower -- upper case to lower case letter conversion
// SYNOPSIS
//     int tolower(int c);
// DESCRIPTION
//     The tolower() function converts an upper-case letter to the corresponding lower-case letter. The argument must be representable as an unsigned char or the value of EOF.
// RETURN VALUES
//     If the argument is an upper-case letter, the tolower() function returns the corresponding lower-case letter if there is one; otherwise, the argument is returned unchanged.

#include  <libft.h>

int tolower(int c)
{
    if (c>= 65 && c<= 90)
    {
        return c+32;
    }
    return c;
}