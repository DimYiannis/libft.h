/*
FT_LSTADD_FRONT (simplified)

NAME
    ft_lstadd_front -- Adds a new element at the front of the list
SYNOPSIS
    void ft_lstadd_front(t_list **lst, t_list *new);
DESCRIPTION
    Add the 'new' element at the front of the list
PARAMETERS
    lst: pointer address to the first element of the list
    new: pointer address of the new element to add to the list
RETURN VALUES
    None
AUTHORIZED EXTERNAL FUNCTIONS
    None
*/

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
    new-> next = *lst;
    *lst-> new;
}