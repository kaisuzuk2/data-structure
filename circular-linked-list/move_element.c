#include "circular.h"

 t_element *next(void)
{
    if (g_current == NULL)
        return (NULL);
    g_current = g_current->next;
    return (g_current);
}

t_element *prev(void)
{
    if (g_current == NULL)
        return (NULL);
    g_current = g_current->prev;
    return (g_current);
}
