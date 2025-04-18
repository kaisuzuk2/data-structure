#include "doubly_linked_list.h"

t_element *add_element(int in_index, char *in_name)
{
    t_element *p;
    
    p = (t_element *)malloc(sizeof(t_element));
    if (p == NULL)
        return (NULL);
    p->index = in_index;
    strcpy(p->name, in_name);
    if (g_current == NULL)
    {
        p->prev = NULL;
        p->next = NULL;
        g_top = g_bottom = g_current = p;
    }
    else 
    {
        p->prev = g_bottom;
        p->next = NULL;
        g_bottom->next = p;
        g_bottom = g_current = p;
    }
    g_count++;
    return (g_current);
}
