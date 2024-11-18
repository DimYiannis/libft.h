/*ATOI(3) (simplified)

NAME
    atoi -- convert ASCII string to integer
SYNOPSIS
    int atoi(const char *str);
DESCRIPTION
    The atoi() function converts the initial portion of the
    string pointed to by str to int representation.*/
#include "libft.h"

int ft_atoi(const char *str)
{
    int sign = 1;
    int result = 0;
    size_t i = 0;

    // Skip whitespace characters
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
           str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
    {
        i++;
    }

    // check for sign
    if (str[i] == '-')
    {
       sign = -1;
       i++;
    }
    else if (str[i]=='+')
    {
        i++;
    }
    
    while (str[i] >= '0' && str[i] <='9')
    {
        result = result * 10 +(str[i] - '0');
        i++;
    }
    
    return result * sign;
}
