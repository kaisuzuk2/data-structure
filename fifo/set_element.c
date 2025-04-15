#include "fifo.h"

t_element *set_element(char *in_name)
{
    t_element *p;

    p = (t_element *)malloc(sizeof(t_element));
    strcpy(p->name, in_name);
    p->next = NULL;
    if (p == NULL)
        return (NULL);
    if (g_top == NULL)
        g_top = g_bottom = p;
    else 
    {
        g_bottom->next = p;
        g_bottom = p;
    }
    return (p);
}
