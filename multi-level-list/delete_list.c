#include "multi.h"

int delete_list(int in_index)
{
    t_list *l;
    t_element *p, *q;

    l = g_top;
    while (l != NULL)
    {
        if (l->index == in_index)
        {
            p = l->top;
            while (p != NULL)
            {
                q = p;
                p = p->next;
                free(q);
            }
            l->counter = 0;
            return (0);
        }
        l = l->next;
    }
    return (-1);
}
