#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
    unsigned char *temp = (unsigned char *)b;
    
    size_t n=0;

    while (n<len)
    {
        *(temp +n) = (unsigned char)c; // Use pointer arithmetic to set the byte
        n++;
    }
    return  b;
    
};