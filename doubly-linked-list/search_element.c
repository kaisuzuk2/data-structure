#include "doubly_linked_list.h"

t_element *search_element(int in_index)
{
    t_element *p;

    p = g_top;
    while (p != NULL)
    {
        if (p->index == in_index)
        {
            g_current = p;
            return (p);
        }
        p = p->next;
    }
    return (NULL);
}
