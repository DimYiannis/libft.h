#include "libft.h"

//the right way
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *str1;
    unsigned char *str2;
    size_t i;
 
    /* converting s1 and s2 to unsigned char */   
    str1 = (unsigned char) *s1;
    str2 = (unsigned char) *s2;
    i = 0;
    /* same loop as strcmp */
    while (i < n)
    {
       /* check if current byte is different in both strings */
        if ((unsigned char) str1[i] != (unsigned char) str2[i])
            /* return the difference between both chars */
            return ((unsigned char) str1[i] - (unsigned char) str2[i]);
    }
    /* if we read through both strings completely and there
     * were no difference, we return 0
     */
    return (0);
}

// my way 
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *string1;
    unsigned char *string2;

    string1 = (unsigned char *)s1; // (unsigned char *) is a type of pointer, s1 is still a pointer no deref happened
    string2 = (unsigned char *)s2;

    int len = 0;
    while (len < n)
    {
        if (*string1 != *string2)
        {
            return *string1 - *string2;       
        }
        else if (*string1 == '\0')
        {
            return 0;
        }
        else
        {
            string1++;
            string2++;
            len++;
        }
    }
}