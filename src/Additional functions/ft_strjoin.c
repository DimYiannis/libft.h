/*FT_STRJOIN (simplified)

NAME
    ft_strjoin -- concatenate 2 strings in a new string
SYNOPSIS
    char *ft_strjoin(const char *s1, const char *s2);
DESCRIPTION
    Allocate (with malloc(3)) and returns a new string resulting from the concatenation of s1 and s2.
PARAMETERS
    s1: prefix string
    s2: suffix string
RETURN VALUES
    ft_strjoin() returns the new string; NULL if the memory allocation failed.
AUTHORIZED EXTERNAL FUNCTIONS
    malloc(3)*/

#include "libft.h"

char *ft_strjoin(const char *s1, const char *s2)
{
    int len1 = ft_strlen(s1);
    int len2 = ft_strlen(s2);

    char *string;

    string = malloc((len1 + len2 + 1) * sizeof(char));
    if (string == NULL)
    {
        return NULL;
    }

    for (size_t i = 0; i < len1; i++)
    {
        string[i] = s1[i];
    }

    // Copy s2 into string using pointer arithmetic
    char *ptr = string + len1; // Move pointer to the position after s1
    while (*s2)
    {
        *ptr++ = *s2++; // Copy character from s2 and increment both pointers
    }

    // Null-terminate the new string
    *ptr = '\0';

    return string;
}

//wanted to exercise pointer arithmetic in the 2nd loop.
// normally would use array indexing