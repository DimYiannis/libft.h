/*
FT_LSTLAST (simplified)

NAME
    ft_lstlast -- get the last element of the list
SYNOPSIS
    t_list *ft_lstlast(t_list *lst);
DESCRIPTION
    Returns the last element of the list
PARAMETERS
    lst: the start of the list
RETURN VALUES
    Last element of the list
AUTHORIZED EXTERNAL FUNCTIONS
    None
*/

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    t_list *temp;
    temp = lst;

    if (!lst)
        return (NULL);

    while (temp->next)
    {
        temp = temp->next;
        return temp;
    }
}