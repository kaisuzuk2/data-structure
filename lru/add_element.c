#include "lru.h"

t_element *add_element(int in_index, char *in_name)
{
    t_element *p;

    p = (t_element *)malloc(sizeof(t_element));
    if (p == NULL)
        return (NULL);
    p->index = in_index;
    strcpy(p->name, in_name);
    if (g_top == NULL)
    {
        p->prev = NULL;
        p->next = NULL;
        g_top = p;
        g_bottom = p;
        g_current = p;
    }
    else 
    {
        p->prev = NULL;
        p->next = g_top;
        g_top->prev = p;
        g_top = p;
        g_current = p;
    }
    g_count++;
    return (g_current);
}
