#include "circular.h"

void free_list(void)
{
    t_element *p, *q;
    int i;

    p = g_current;
    i = 0;
    while (i < g_count)
    {
        q = p;
        p = p->next;
        free(q);
        i++;
    }
    g_current = NULL;
    g_count = 0;
}
