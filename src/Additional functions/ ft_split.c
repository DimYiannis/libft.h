/*FT_SPLIT (simplified)

NAME
    ft_split -- split a string into an array of words
SYNOPSIS
    char **ft_split(const char *s, char c);
DESCRIPTION
    Allocate (with malloc(3)) and returns an array of strings obtained 
    by splitting s with the character c, used as delimiter.
    The returned array must be NUL-terminated.
PARAMETERS
    s: string to split
    c: delimiter character
RETURN VALUES
    ft_split() returns an array of strings resulting from the splitting of s; NULL if the memory allocation failed.
AUTHORIZED EXTERNAL FUNCTIONS
    malloc(3)*/

#include "libft.h"

char **ft_split(const char *s, char c)
{
    size_t len=0;
    unsigned char *ptr_s = (unsigned char *)s; //s is a pointer

    while (*ptr_s !='\0')
    {
        len++;
        ptr_s++;
    }

    *ptr_s = s; //setting the pointer to its original position

    unsigned char words = malloc(len*sizeof(char));

    for (size_t i = 0; i < len; i++)
    {
        
    }
    

}

