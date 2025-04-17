#include "lifo.h"

t_element *get_element(void)
{
    t_element *p;
    p = g_top;
    if (g_top != NULL)
        g_top = g_top->next;
    return (p);
}
