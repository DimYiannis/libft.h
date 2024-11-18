/*
FT_LSTNEW (simplified)

NAME
    ft_lstnew -- create a new list node element
SYNOPSIS
    t_list *ft_lstnew(void *content);
DESCRIPTION
    Allocate (with malloc(3)) and return the new element. 
    The member variable 'content' is initialized with the value of 
    the 'content' parameter. The 'next' variable is initialized to NULL.
PARAMETERS
    content: The content of the new element
RETURN VALUES
    The new element.
AUTHORIZED EXTERNAL FUNCTIONS
    malloc(3)
*/

#include "libft.h"

t_list *ft_lstnew(void *content)
{
    //declaring the new list element
    t_list *elem;

    //allocating memory
    elem = malloc(sizeof(t_list));
    if (!elem)
    {
        return NULL;
    }

    elem->content =content;
    elem->next=NULL;

    return elem;
}