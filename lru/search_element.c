#include "lru.h"

t_element *search_element(int in_index)
{
    t_element *p;

    p = g_top;
    while (p != NULL)
    {
        if (p->index == in_index)
        {
            if (p != g_top)
            {
                if (p->prev != NULL)
                    p->prev->next = p->next;
                if (p->next != NULL)
                    p->next->prev = p->prev;
                else 
                    g_bottom = p->prev;
                p->prev = NULL;
                p->next = g_top;
                g_top = p;
            }
            g_top = g_current = p;
            return (g_top);
        }
        p = p->next;
    }
    return (NULL);
}
