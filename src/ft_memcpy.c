#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    unsigned char *tempd = (unsigned char *)dst;
    unsigned char *temps = (unsigned char *)src;

    if (src ==NULL && dst==NULL)
    {
       return dst;
    }
    
    while (n > 0)
    {
        *(tempd++) = *(temps++); // pointer arithmetic to set the byte
        n--;
    }

    return dst;
}