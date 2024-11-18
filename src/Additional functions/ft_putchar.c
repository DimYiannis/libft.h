/*
This function uses write() to output a single 
character to the standard output.

prolly used in piscine
*/

#include <unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}