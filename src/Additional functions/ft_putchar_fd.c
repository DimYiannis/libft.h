/*
FT_PUTCHAR_FD (simplified)

NAME
    ft_putchar_fd -- write character c on a specified file descriptor
SYNOPSIS
    void ft_putchar_fd(char c, int fd);
DESCRIPTION
    The ft_putchar_fd() function writes the character c on the file descriptor fd.
PARAMETERS
    c: character to write
    fd: file descriptor on which to write
RETURN VALUES
    ft_putchar_fd() does not return anything.
AUTHORIZED EXTERNAL FUNCTIONS
    write(2)
*/

#include "libft.h"

void ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}
