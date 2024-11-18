/*
FT_PUTSTR_FD (simplified)

NAME
    ft_putstr_fd -- write a string on a specified file descriptor
SYNOPSIS
    void ft_putstr_fd(char *s, int fd);
DESCRIPTION
    Write the string s on the file descriptor fd.
PARAMETERS
    s: string to write
    fd: file descriptor on which to write
RETURN VALUES
    ft_putstr_fd() does not return anything
AUTHORIZED EXTERNAL FUNCTIONS
    write(2)
*/

#include "libft.h"

void ft_putstr_fd(char *s, int fd) 
{
    int i=0;

    while (s[i])
    {
        write(fd, &s[i], 1);
        i++;
    }
    
    
}