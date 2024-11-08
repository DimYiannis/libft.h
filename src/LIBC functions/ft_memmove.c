#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char *tempd = (unsigned char *)dst;
    const unsigned char *temps = (unsigned char *)src;

    if (tempd > temps)
    {
        /* copying should proceed from the end to avoid overwriting. */
        tempd += len;
        temps += len;
        while (len > 0)
        {
            //When copying from end to start, the pointers should first 
            //be decremented before accessing the memory location. 
            //Otherwise, the pointers will write and read past the 
            //intended memory boundaries.
            *(--tempd) = *(--temps); // Decrement before copying
            len--;
        }
    }
    else
    {
        /*copying should proceed from the start to avoid overwriting.*/
        while (len > 0)
        {
            *(tempd++) = *(temps++);
            len--;
        }
    }

    return dst;
}