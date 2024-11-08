/*CALLOC(3) (simplified)

NAME
    calloc -- memory allocation
SYNOPSIS
    void *calloc(size_t count, size_t size);
DESCRIPTION
    The calloc() function allocates memory.
    The allocated memory is aligned such that it can be used for
    any data type.
    The calloc() function contigously allocates enough space
    for count objects that are size bytes of memory each and returns
    a pointer to the allocated memory.
    The allocated memory is filled with bytes of value zero.
RETURN VALUES
    If successful, calloc() returns a pointer to allocated memory.
    If there is an error, they return a NULL pointer and set errno
    to ENOMEM.*/

#include "libft.h"

void *calloc(size_t count, size_t size)
{
    unsigned char *tmp;

    tmp = malloc(count * size);
    if (tmp == NULL)
    {
        return NULL; // Check if malloc failed
    }

    for (size_t i = 0; i < count*size; i++)
    {
        tmp[i] = 0;
    }
    
    return tmp;
}