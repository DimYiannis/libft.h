/*
MEMCHR(3) (simplified)

NAME
    memchr -- locate byte in byte string
SYNOPSIS
    void *memchr(const void *s, int c, size_t n);
DESCRIPTION
    the memchr() function locates the first occurence of c (convered to an unsigned char) in string s.
RETURN VALUES
    The memchr() function returns a pointer to the byte located, or NULL if no such byte exists within n bytes.
*/
#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char char_to_find = (unsigned char)c;
    const unsigned char *temps = (const unsigned char *)s;

    while (n > 0)
    {
        if (*temps == char_to_find)
        {
            return (void *)temps;
        }
        n--;
        temps++;
    }
    return NULL;
}
