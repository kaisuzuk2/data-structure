#include "circular.h"

t_element *search_element(int in_index)
{
    t_element *p;
    int i;

    i = 0;
    p = g_current;
    while (i < g_count)
    {
        if (p->index == in_index)
        {
            g_current = p;
            return (p);
        }
        p = p->next;
        i++;
    }
    return (NULL);
}
