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

/*
unsigned char *tempd = (unsigned char *)dst;

This assigns the address stored in dst (after casting it) to tempd. 
It tells the compiler that tempd is a pointer to unsigned char, so 
you can dereference it to read or write a single byte at a time.
*ptr = (unsigned char *)str; (Incorrect)

This statement means you are trying to assign an address 
(unsigned char *)str to the value pointed to by ptr, which is not 
valid because *ptr expects a value, not an address.*/