#include "lifo.h"

t_element *set_element(char *in_name)
{
    t_element *p;

    p = (t_element *)malloc(sizeof(t_element));
    strcpy(p->name, in_name);
    p->next = g_top;
    g_top = p;
    return (p);
}
