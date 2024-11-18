/*
FT_STRITERI (simplified)

NAME
    ft_striteri -- apply a function to each character of a string
    (index specified)
SYNOPSIS
    void ft_striteri(char *s, void (*f)(unsigned int, char*));
DESCRIPTION
    Apply the function 'f' to each characters of the string 's',
    passing its index as a first parameter.
    Each character is transmitted by address to 'f' so it can be
    modified if necessary.
*/

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    if (s==NULL || f==NULL)
    {
        return;
    }
    
    unsigned int i =0;
    while (s[i]!= '\0')
    {
        f(i, &s[i]);
        i++;
    }
    
    
}