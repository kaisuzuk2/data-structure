#include "tree.h"

void print_element(t_element *in_element)
{
    if (in_element == NULL)
        return ;
    if (in_element->left != NULL)
        print_element(in_element->left);
    printf("index = %d / name = %s\n", in_element->index, in_element->name);
    if (in_element->right != NULL)
        print_element(in_element->right);
}
