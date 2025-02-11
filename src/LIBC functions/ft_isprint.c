/*
ISPRINT(3) (simplified)

NAME
    isprint -- printing character test (space character inclusive)
SYNOPSIS
    int isprint(int c)
DESCRIPTION
    The isprint() function tests for any printing character, including space. The value of the argument must representable as an unsigned char or the value of EOF.
RETURN VALUES
    The isprint() function returns zero if the character tests false and returns non-zero if the character tests true.
    */

#include <libft.h>

int isprint(int c)
{
    if (c >= 32 && c <= 126)
    {
        return c;
    }

    return 0;
}