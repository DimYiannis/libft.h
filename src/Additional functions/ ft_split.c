/*FT_SPLIT (simplified)

NAME
    ft_split -- split a string into an array of words
SYNOPSIS
    char **ft_split(const char *s, char c);
DESCRIPTION
    Allocate (with malloc(3)) and returns an array of strings obtained
    by splitting s with the character c, used as delimiter.
    The returned array must be NUL-terminated.
PARAMETERS
    s: string to split
    c: delimiter character
RETURN VALUES
    ft_split() returns an array of strings resulting from the splitting of s; NULL if the memory allocation failed.
AUTHORIZED EXTERNAL FUNCTIONS
    malloc(3)*/

#include "libft.h"

// Helper function to count the number of words in the string
static int count_words(const char *s, char c)
{
    int count = 0;
    int in_word = 0;

    while (*s)
    {
        if (*s != c && !in_word)
        {
            in_word = 1;
            count++;
        }
        else if (*s == c)
        {
            in_word = 0;
        }
        s++;
    }
    return count;
}

// Helper function to get the length of the next word
static int word_length(const char *s, char c)
{
    int length = 0;
    while (*s && *s != c)
    {
        length++;
        s++;
    }
    return length;
}

// Main function to split the string
char **ft_split(const char *s, char c)
{
    if (!s)
    {
        return NULL;
    }

    int word_count = count_words(s, c);
    //mem alloc for the words in the string
    char **result = (char **)malloc((word_count + 1) * sizeof(char *));
    if (!result)
    {
        return NULL;
    }

    int i = 0;
    while (*s)
    {
        if (*s != c)
        {
            int len = word_length(s, c);
            //mem alloc for the chars in a word
            result[i] = (char *)malloc((len + 1) * sizeof(char));
            if (!result[i])
            {
                // Free previously allocated memory on failure
                while (i-- > 0)
                {
                    free(result[i]);
                    free(result);
                    return NULL;
                }
            }
            // setting the chars in each word
            for (int j = 0; j < len; j++)
            {
                result[i][j] = *s++;
                result[i][len] = '\0';
                i++;
            }
        }
        else
        {
            s++;
        }
    }
    result[i] = NULL;
    return result;
}
