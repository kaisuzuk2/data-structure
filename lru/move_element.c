#include "lru.h"

t_element *top(void)
{
    g_current = g_top;
    return (g_current);
}

t_element *bottom(void)
{
    g_current = g_bottom;
    return (g_current);
}

t_element *next(void)
{
    if (g_current == NULL)
        return (NULL);
    if (g_current->next == NULL)
        return (NULL);
    g_current = g_current->next;
    return (g_current);
}

t_element *prev(void)
{
    if (g_current == NULL)
        return (NULL);
    if (g_current->prev == NULL)
        return (NULL);
    g_current = g_current->prev;
    return (g_current);
}
