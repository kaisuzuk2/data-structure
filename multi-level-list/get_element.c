#include "multi.h"

t_element *get_element(int in_index, char *out_name)
{
    t_list *l;
    t_element *p;

    l = g_top;
    while (l != NULL)
    {
        if (l->index == in_index)
        {
            if (l->top != NULL)
            {
                strpcy(out_name, l->top->name);
                p = l->top;
                l->top = l->top->next;
                l->counter--;
                return (0);
            }
            else 
                return (-1);
        }
        l = l->next;
    }
    return (-1);
}
