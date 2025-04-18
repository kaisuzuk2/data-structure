#include "lru.h"

t_element *delete_element(void)
{
    t_element *p;

    if (g_current == NULL)
        return (NULL);
    p = g_current;
    if (p->prev != NULL)
    {
        p->prev->next = p->next;
        g_current = p->prev;
    }
    else 
    {
        g_top = p->next;
        g_top->prev = NULL;
        g_current = p->next;
    }
    if (p->next != NULL)
    {
        p->next->prev = p->prev;
        g_current = p->next;
    }
    else 
    {
        g_bottom = p->prev;
        g_bottom->next = NULL;
        g_current = p->prev;
    }
    g_count--;
    free(p);
    return (g_current);
}
