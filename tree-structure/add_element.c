#include "tree.h"

t_element *add_element(int in_index, char *in_name)
{
    t_element *p, *q;

    p = (t_element *)malloc(sizeof(t_element));
    if (p == NULL)
        return (NULL);
    p->index = in_index;
    strcpy(p->name, in_name);
    p->left = p->right = NULL;
    g_count++;
    if (g_top == NULL)
    {
        g_top = p;
        return (p);
    }
    q = g_top;
    while (1)
    {
        if (q->index > p->index)
        {
            if (q->left == NULL)
            {
                q->left = p;
                break;
            }
            else 
            {
                q = q->left;
            }
        }
        else 
        {
            if (q->right == NULL)
            {
                q->right = p;
                break;
            }
            else 
            {
                q = q->right;
            }
        }
    }
    return (p);
}
