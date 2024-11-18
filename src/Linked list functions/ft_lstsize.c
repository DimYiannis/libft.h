/*
FT_LSTSIZE (simplified)

NAME
    ft_lstsize -- returns the number of element in the list
SYNOPSIS
    int *ft_lstsize(t_list *lst);
DESCRIPTION
    Count the number of elements of the list
PARAMETERS
    lst: start of the list
RETURN VALUES
    The size of the list
AUTHORIZED EXTERNAL FUNCTIONS
    None
*/

#include "libft.h"

int *ft_lstsize(t_list *lst)
{
    t_list *temp;
    int len = 0;

    tmp = lst;
    while (tmp)
    {
        tmp = tmp->next
        len++;
    }
    return len;
}
