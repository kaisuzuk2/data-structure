#include "tree.h"

t_element *search_element(int in_index)
{
    t_element *p;

    p = g_top;
    while (p != NULL)
    {
        if (p->index == in_index)
            return (p);
        else if (p->index > in_index)
            p = p->left;
        else 
            p = p->right;
    }
    return (NULL);
}
