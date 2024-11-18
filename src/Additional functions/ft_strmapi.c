/*
FT_STRMAPI() (simplified)

NAME
    ft_strmapi -- apply a function to each character of a string
SYNOPSIS
    char *ft_strmapi(const char *s, char (*f)(unsigned int, char));
DESCRIPTION
    Apply the function 'f' to each characters in the string 's' to create a new string (with malloc(3)) resulting of the successive applications of 'f'.
PARAMETERS
    s: string over which to iterate
    f: function to apply to each character
RETURN VALUES
    ft_strmapi() returns a new string resulting of the successive applications of 'f'; NULL if the memory allocations failed.
AUTHORIZED EXTERNAL FUNCTIONS
    malloc(3)
*/

#include "libft.h"

char *ft_strmapi(const char *s, char (*f)(unsigned int, char))
{

    if (!s || !f)
    {
        return NULL;
    }

    // Calculate the length of the string
    size_t len = 0;
    while (s[len] != '\0')
    {
        len++;
    }

    // Allocate memory for the new string, including space for the null terminator
    char *string = (char *)malloc((len + 1) * sizeof(char));
    if (!string)
    {
        return NULL;
    }

    // Apply the function 'f' to each character
    for (unsigned int i = 0; i < len; i++)
    {
        string[i] = f(i, s[i]);
    }
    
    // Null-terminate the new string
    string[len] = 0;

    return string;
}