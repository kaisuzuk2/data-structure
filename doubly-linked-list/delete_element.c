#include "doubly_linked_list.h"

t_element *delete_element(void)
{
    t_element *p;

    if (g_current == NULL)
        return (NULL);
    p = g_current;
    if (p->next != NULL)
    {
        p->next->prev = p->prev;
        if (p->prev == NULL)
            g_top = p->next;
    }
    else 
    {
        g_bottom = p->prev;
        if (g_bottom != NULL)
            g_bottom->next = NULL;
    }
    if (p->prev != NULL)
    {
        p->prev->next = p->next;
        if (p->next == NULL)
            g_bottom = p->prev;
    }
    else 
    {
        g_top = p->next;
        if (g_top != NULL)
            g_top->prev = NULL;
    }
    if (p->prev != NULL)
        g_current = p->prev;
    else 
        g_current = p->next;
    free(p);
    g_count--;
    return (g_current);
}
