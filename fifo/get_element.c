#include "fifo.h"

int get_element(char *out_name)
{
    t_element *p;
    
    if (g_top == NULL)
        return (-1);
    p = g_top;
    strcpy(out_name, p->name);
    g_top = g_top->next;
    if (g_top == NULL)
        g_bottom = NULL;
    free(p);
    return (0);
}
