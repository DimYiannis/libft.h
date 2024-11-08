/*
STRDUP(3) (simplified)

NAME
    strdup -- save a copy of a string
SYNOPSIS
    char *strdup(const char *s1);
DESCRIPTION
    The strdup() function allocates sufficient memory for a copy
    of the string s1, does the copy, and returns a pointer to it.
    The pointer may subsequently be used as an argument to the
    function free(3).
    If insufficient memory is available, NULL is returned and
    errno is set to ENOMEM.*/
#include "libft.h"
#include <stdlib.h>

char ft_strdup(const char *src)
{

    int n = 0;
    char *dest;

    n = ft_strlen(src);

    dest = malloc((n + 1) * sizeof(char)); // n+1 for null terminator
    if (dest == NULL)
    {
        return NULL;
    }

    for (int i = 0; i <= n; i++)
    {
        dest[i] = src[i]; // Copy each character including the null terminator
    }

    return dest;
}