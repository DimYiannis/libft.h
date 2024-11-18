/*
The ft_putnbr() function is a commonly implemented function in C, 
often used in educational contexts like the 42 Network to output 
an integer to the standard output (stdout). Here's a simple 
implementation of ft_putnbr():

prolly used in piscine
*/
#include <unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}

void ft_putnbr(int n) {
    if (n == -2147483648) {
        ft_putchar('-');
        ft_putchar('2');
        n = 147483648; // We separate the number into two parts due to the range of integers
    }
    if (n < 0) {
        ft_putchar('-');
        n = -n;
    }
    if (n >= 10) {
        ft_putnbr(n / 10); // Recursively call to print the digits
    }
    ft_putchar(n % 10 + '0'); // Print the last digit
}
