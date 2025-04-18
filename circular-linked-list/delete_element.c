#include "circular.h"

t_element *delete_element(void)
{
    t_element *p;

    if (g_current == NULL)
        return NULL;
    if (g_count == 1)
    {
        p = g_current;
        g_current = NULL;
    }
    else 
    {
        p = g_current;
        p->next->prev = p->prev;
        p->prev->next = p->next;
        g_current = p->next;
    }
    g_count--;
    free(p);
    return (g_current);
}
