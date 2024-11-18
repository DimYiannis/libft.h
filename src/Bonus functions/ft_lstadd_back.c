/*
FT_LSTADD_BACK (simplified)

NAME
    ft_lstadd_back -- adds a new node at the end of the list
SYNOPSIS
    void ft_lstadd_back(t_list **lst, t_list *new);
DESCRIPTION
    Add the 'new' element at the end of the list
PARAMETERS
    lst: pointer address of the first element of the list
    new: pointer address of the new element to add to the list
RETURN VALUES
    None
AUTHORIZED EXTERNAL FUNCTIONS
    None
*/

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *temp;

    if (!lst || !new) // Check for null pointers to avoid crashes
        return;

    // If the list is empty, the new node becomes the first node
    if (*lst == NULL)
    {
        *lst = new;
        return;
    }

    temp = *lst;

    while (temp->next)
    {
        temp = temp->next;
    }

    temp->next = new;
}