/*
FT_PUTENDL_FD (simplified)

NAME
    ft_putendl_fd -- write a string on a specified file descriptor, follow by a newline
SYNOPSIS
    void ft_putendl_fd(char *s, int fd);
DESCRIPTION
    ft_putendl_fd() writes the string s, followed by a newline, on the file descriptor fd
PARAMETERS
    s: string to write
    fd: the file descriptor on which to write
RETURN VALUES
    ft_putendl_fd() does not return anything
AUTHORIZED EXTERNAL FUNCTIONS
    write(2)
*/

#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
    int i=0;

    while (s[i])
    {
        write(fd, &s[i], i);
        i++;
    }
    write(fd, "\n", 1); 
}