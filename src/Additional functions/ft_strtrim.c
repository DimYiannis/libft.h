/*FT_STRTRIM (simplified)

NAME
    ft_strtrim -- trims character set from string
SYNOPSIS
    char *ft_strtrim(const char *s1, const char *set);
DESCRIPTION
    Allocate (with malloc(3)) and returns a copy of s1, without the characters specified in set at the beginning and the end of s1.
PARAMETERS
    s1: string to trim
    set: characters to trim
RETURN VALUES
    ft_strtrim() returns a trimmed copy of s1; NULL if the memory allocation failed.
AUTHORIZED EXTERNAL FUNCTIONS
    malloc(3)*/

#include "libft.h"

#include "libft.h"

char *ft_strtrim(const char *s1, const char *set)
{
    if (!s1 || !set)
    {
        return NULL;
    }

    unsigned char *trim;
    unsigned char *ptr = (unsigned char*)s1;  // Pointer to s1
    size_t len_s1 = 0;

    // Calculate the length of s1 (including null terminator)
    while (*ptr++)
    {
        len_s1++;
    }

    // Allocate memory for the trimmed string (+1 for null terminator)
    trim = malloc(len_s1);
    if (!trim)
    {
        return NULL;
    }

    ptr = (unsigned char*)s1;  // Reset pointer to the start of s1
    size_t i = 0;  // Index for the trimmed string

    // Skip leading characters that are part of set
    while (*ptr)
    {
        const char *set_ptr = set;
        int is_in_set = 0;

        // Compare current character of s1 with all characters in set
        while (*set_ptr)
        {
            if (*ptr == *set_ptr)
            {
                is_in_set = 1;
                break;  // If found in set, skip to the next character in s1
            }
            set_ptr++;
        }

        if (!is_in_set)
        {
            break;  // If the character is not in set, stop skipping
        }

        ptr++;  // Move to the next character in s1
    }

    // Copy the remaining characters from s1 that are not in set
    while (*ptr)
    {
        const char *set_ptr = set;
        int is_in_set = 0;

        // Compare the current character in s1 with all characters in set
        while (*set_ptr)
        {
            if (*ptr == *set_ptr)
            {
                is_in_set = 1;
                break;
            }
            set_ptr++;
        }

        // If character is not in set, copy it to the trim string
        if (!is_in_set)
        {
            trim[i++] = *ptr;
        }

        ptr++;  // Move to the next character in s1
    }

    trim[i] = '\0';  // Null-terminate the trimmed string
    return trim;
}
