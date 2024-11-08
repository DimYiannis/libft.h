#include "libft.h"

void ft_bzero(void *s, size_t n)
{
    if (n == 0)
    {
        return;
    }

    unsigned char *tmp = (unsigned char *)s;

    while (n > 0)
    {
        *tmp = 0;
        tmp++;
        n--;
    }

    return s;
}