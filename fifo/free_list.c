#include "fifo.h"

void free_list(void)
{
    t_element *p, *q;

    p = g_top;
    while (p != NULL)
    {
        q = p;
        p = p->next;
        free(q);
    }
    g_top = g_bottom = NULL;
}
