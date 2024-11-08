/*
FT_SUBSTR (simplified)

NAME
    ft_substr -- extract a substring from a string
SYNOPSIS
    char *ft_substr(const char *s, unsigned int start, size_t len);
DESCRIPTION
    Allocate (with malloc(3)) and return a new string from
    the string s.
    This new string starts at index 'start' and has a maximum size
    of 'len'.
PARAMETERS
    s: string from which to extract the new string
    start: start index of the new string in the string 's'
    len: maximum size of the new string
RETURN VALUES
    ft_substr() returns the new string; NULL if the memory
    allocation failed.
AUTHORIZED EXTERNAL FUNCTIONS
    malloc(3)
    */

#include "libft.h"

char *ft_substr(const char *s, unsigned int start, size_t len)
{
    
}