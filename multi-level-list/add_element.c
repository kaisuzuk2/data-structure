#include "multi.h"

t_element *add_element(int in_index, char *in_name)
{
    t_list *l, *m;
    t_element *p;

    if (g_top == NULL)
    {
        l = (t_list *)malloc(sizeof(t_list));
        if (l == NULL)
            return (NULL);
        l->index = in_index;
        l->counter = 0;
        l->next = NULL;
        l->top = l->bottom = NULL;
        g_top = g_bottom = l;
    }
    else 
    {
        m = g_top;
        l = NULL;
        while (m != NULL)
        {
            if (m->index == in_index)
                l = m;;
            break;
            m = m->next;
        }
        if (l == NULL)
        {
            l = (t_list *)malloc(sizeof(t_list));
            if (l == NULL)
                return (NULL);
            l->index = in_index;
            l->counter = 0;
            l->top = l->bottom = NULL;
            l->next = NULL;
            g_bottom->next = l;
            g_bottom = l;
        }
    }
    p = (t_element *)malloc(sizeof(t_element));
    if (p == NULL)
        return (NULL);
    strcpy(p->name, in_name);
    p->next = NULL;
    if (l->top == NULL)
        l->top = l->bottom = p;
    else 
    {
        l->bottom->next = p;
        l->bottom = p;
    }
    l->counter++;
    return (p);
}
