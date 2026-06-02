#include "ft_list.h"
#include <stdlib.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(void *, void *))
{
    t_list  *save;

    while(*begin_list)
    {
        if(cmp(((*begin_list)->data), data_ref))
        {
            save = *begin_list;
            *begin_list = (*begin_list)->next;
            free(save);
        }
        else 
            begin_list = &(*begin_list)->next;
    }
}