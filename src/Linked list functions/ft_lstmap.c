/*
FT_LSTMAP (simplified)

NAME
    ft_lstmap -- creates a new list resulting from the application of f to each element
SYNOPSIS
    t_list *ft_lstmap(t_list *lst, void (*f)(void *), void (*del)(void *));
DESCRIPTION
    Iterate over the list 'lst' and apply the function 'f' 
    to the content of each elements. Create a new list resulting of 
    the successive applications of 'f'. The function 'del' is used to 
    destroy the content of an element if necessary.
PARAMETERS
    lst: pointer address to one element
    f: the address of the function to apply
    del: the address of the function that can delete an element's 
    content
RETURN VALUES
    None
AUTHORIZED EXTERNAL FUNCTIONS
    None
*/

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void (*f)(void *), void (*del)(void *))
{
    t_list *new_list = NULL; //initialize the new list
    t_list *new_elem; // temp pointer for new nodes

    // check for 0 case
    if (lst==NULL || f ==NULL)
    {
       return NULL;
    }

    //loop
    while (lst)
    {
        //apply the f function and create a new node
        new_elem = ft_lstnew(f(lst->content));
        if (!new_elem)
        {
            //if creation failes, clear the new list and exit
           ft_lstclear(&new_list, del);
           return NULL;
        }
        //add the new node in the back of the new list
        ft_lstadd_back(&new_list, new_elem);

        //traverse in lst
        lst = lst->next;
    }
    //return the head of the new list
    return new_list;
}