#include "libft.h"

char ft_strdup(const char *src)
{

    int n = 0;
    char *dest;

    while (src[n] != '\0')
    {
        n++;
    }

    dest = malloc((n+1) * sizeof(char)); //n+1 for null terminator
    if (dest == NULL)
    {
        return NULL;
    }

    ft_strcpy(dest, src);

    return dest;
}