#include "doubly_linked_list.h"

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
        g_top = g_bottom = g_current = p;
        p->next = NULL;
        p->prev = NULL;
    }
    else 
    {
        p->prev = g_current;
        p->next = g_current->next;
        if (g_current->next == NULL)
            g_bottom = p;
        else 
            g_current->next->prev = p;
        g_current->next = p;
        g_current = p;
    }
    g_count++;
    return (g_current);
}
