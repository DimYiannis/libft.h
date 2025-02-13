/*
STRRCHR(3) (simplified)

NAME
    strrchr -- locate character in string
SYNOPSIS
    char *strrchr(const char *s, int c);
DESCRIPTION
    The strrchr() function is identical to strchr(), except it locates the last occurence of c.
RETURN VALUES
    The function strrchr() returns a pointer to the located character, or NULL if the character does not appear in the string.
    */

#include <libft.h>
#include <stddef.h>

char *strrchr(const char *s, int c)
{
    // initialising pointer to null
    char temp = NULL;
    while (*s)
    {
        if (*s == (char)c)
        {
            temp = (char *)s; // store position of last occurance
        }
        s++;
    }
    if (*s == '\0')
    {
        return (char *)s;
    }
    return temp;
}

/*
Why (char *)s?
The cast (char *)s removes the const qualifier, converting s from const char * to char *.
This is necessary because strrchr() is supposed to return a char *, and might be needed to modify the returned pointer’s contents in some cases.
*/