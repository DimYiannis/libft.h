/*
FT_PUTNBR_FD (simplified)

NAME
    ft_putnbr_fd -- write an int on a specified file descriptor
SYNOPSIS
    void ft_putnbr_fd(int n, int fd);
DESCRIPTION
    ft_putnbr_fd() writes the int n on the file descriptor fd
PARAMETERS
    n: int to write
    fd: file descriptor on which to write
RETURN VALUES
    ft_putnbr_fd() does not return anything
AUTHORIZED EXTERNAL FUNCTIONS
    write(2)
*/

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    // Handle the special case of INT_MIN˝
    if (n == -2147483648)
    {
        write(fd, "-2147483648", 11);
        return;
    }

    // Handle negative numbers
    if (n < 0)
    {
        write(fd, "-", 1);
        n = -n;
    }

    // Handle recursive case for numbers larger than 9
    if (n >= 10)
    {
        ft_putnbr_fd(n / 10, fd); // Recursively write the digits
    }

    // Write the current digit
    char digit = (n % 10) + '0'; // Convert the last digit to char
    write(fd, &digit, 1);
}