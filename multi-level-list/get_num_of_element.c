#include "multi.h"

int get_num_of_element(int in_index)
{
    t_list *l;
    t_element *p, *q;

    l = g_top;
    while (l != NULL)
    {
        if (l->index == in_index)
            return (l->counter);
        l = l->next;
    }
    return (0);
}
