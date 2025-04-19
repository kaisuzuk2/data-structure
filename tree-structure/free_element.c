#include "tree.h"

void free_element(t_element *in_element)
{
    if (in_element == NULL)
        return ;
    if (in_element->left != NULL)
        free_element(in_element->left);
    if (in_element->right != NULL)
        free_element(in_element->right);
    free(in_element);
    g_count--;
    return ;
}
