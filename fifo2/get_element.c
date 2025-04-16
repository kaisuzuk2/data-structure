#include "fifo2.h"

int get_element(char *out_name)
{
    t_element *p;

    if (g_top == NULL)
        return (-1);
    strcpy(out_name, g_top->name);
    p = g_top;
    g_top = g_top->next;
    if (g_top == NULL)
        g_bottom = NULL;
    free(p);
    g_counter--;
    return (0);
}
