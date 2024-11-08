#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char char_to_find = c;
    unsigned char *temps = (unsigned char *)s;

    while (n > 0)
    {
        if (*temps == char_to_find)
        {
            return (void *)temps;
        }
        else
        {
            n--;
            temps++;
        }
        return NULL;
    }
}
