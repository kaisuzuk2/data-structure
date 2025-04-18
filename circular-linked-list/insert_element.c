#include "circular.h"

t_element *insert_element(int in_index, char *in_name)
{
    t_element *p;

    p = (t_element *)malloc(sizeof(t_element));
    if (p == NULL)
        return (NULL);
    p->index = in_index;
    strcpy(p->name, in_name);
    if (g_current == NULL)
    {
        g_current = p;
        p ->prev = p;
        p->next = p;
    }
    else 
    {
        p->prev = g_current;
        p->next = g_current->next;
        g_current->next->prev = p;
        g_current->next = p;
        g_current = p;
    }
    g_count++;
    return (g_current);
}
