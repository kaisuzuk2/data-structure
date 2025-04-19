#include "tree.h"

t_element *top(void)
{
    return (g_top);
}

t_element *left(t_element *in_element)
{
    return (in_element->left);
}

t_element *right(t_element *in_element)
{
    return (in_element->right);
}
