// libft.h
#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>
#include <unistd.h>

// Part 1: Function prototypes (C standard library functions reimplemented)
size_t  ft_strlen(const char *s);
char    *ft_strcpy(char *dst, const char *src);
int     ft_strcmp(const char *s1, const char *s2);
char    *ft_strdup(const char *s1);
void    *ft_memset(void *b, int c, size_t len);
void    ft_bzero(void *s, size_t n);
void    *ft_memcpy(void *dst, const void *src, size_t n);
void    *ft_memmove(void *dst, const void *src, size_t len);
void    *ft_memchr(const void *s, int c, size_t n);
int     ft_memcmp(const void *s1, const void *s2, size_t n);

// More functions as you implement them...

// Part 2: Utility functions and data structure functions (if required)
// int ft_atoi(const char *str);     // Conversion example
// char *ft_strjoin(char const *s1, char const *s2); // String manipulation example
// struct s_list { ... };            // If you have list manipulation functions

#endif // LIBFT_H
