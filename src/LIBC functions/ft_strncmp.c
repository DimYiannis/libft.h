/*
STRNCMP(3) (simplified)

NAME
    strncmp -- compare strings
SYNOPSIS
    int strncmp(const char *s1, const char *s2, size_t n);
DESCRIPTION
    The strncmp() function lexicographically compare the null-terminated strings s1 and s2.
    The strncmp() function compares not more than n characters. Because strncmp() is designed for comparing strings rather than binary data, characters that appear after a '\0' character are not compared.
RETURN VALUES
    The strncmp() function returns an integer greater than, equal to, or less than 0, according as the string s1 is greater than, equal to, or less than the string s2. The comparison is done using unsigned characters, so that '\200' is greater than '\0'.
*/

#include <libft.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    if (n == 0)
        return (0);
    
    while (n > 0)
    {
        if (*s1 != *s2 || !*s1)
            return ((unsigned char)*s1 - (unsigned char)*s2);
        s1++;
        s2++;
        n--;
    }
    
    return (0);
}