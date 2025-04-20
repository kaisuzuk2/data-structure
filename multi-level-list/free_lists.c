#include "multi.h"

void free_lists(void)
{
    t_list *p, *q;
    t_element *r, *s;

    p = g_top;
    while (p != NULL)
    {
        r = p->top;
        while (r != NULL)
        {
            s = r;
            r = r->next;
            free(s);
        }
        q = p;
        p = p->next;
        free(q);
    }
    g_top = g_bottom = NULL;
}
