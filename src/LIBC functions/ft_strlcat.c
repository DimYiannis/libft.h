/*
STRLCAT(3) (simplified)

NAME
    strlcat -- size-bounded string concatenation
SYNOPSIS
    size_t strlcat(char *dst, const char *src, size_t dstsize);
DESCRIPTION
    The strlcat() function concatenate strings with the same input parameters and outuput result as snprintf(3). It is designed to be safer, more consistent, and less error prone replacements for the easily misused function strncat(3).
    strlcat() take the full size of the destination buffer and guarantee NUL-termination if there is room. Note that room for the NUL should be included in dstsize. Also note that strlcat() only operate on true ''C'' strings. This means that both src and dst must be NUL-terminated.
    strlcat() appends string src to the end of dst. It will append at most dstsize - strlen(dst) - 1 characters. It will then NUL-terminate, unless dstsize is 0 or the original dst string was longer than dstsize (in practice this should not happen as it means that either dstsize is incorrect or that dst is not a proper string).
    If the src and dst strings overlap, the behavior is undefinded.
RETURN VALUES
    Like snprintf(3), strlcat() function return the total length of the string it tried to create. That means the initial length of dst plus the length of src.
    If the return value is >= dstsize, the output string has been truncated.
    It is the caller's responsibility to handle this.
    */

#include <libft.h>

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t lendest = ft_strlen(dst);
    size_t lensrc = ft_strlen(src);

    // dstsize is smaller than the existing dst length
    if (dstsize <= lendest)
        return dstsize + lensrc;

    // Calculate the number of bytes to append
    size_t copylen = dstsize - lendest - 1;

    // Move pointer to the end of dst
    char *pdst = dst + lendest;

    // Append src to dst
    while (*src != '\0' && copylen > 0)
    {
        *pdst++ = *src++;
        copylen--;
    }

    // Always null-terminate
    *pdst = '\0';

    // total length of the string it tried to create
    return lendest + lensrc;
}