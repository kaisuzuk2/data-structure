#include "tree.h"

t_element *g_top = NULL;
int g_count = 0;

void init_tree(void)
{
    free_tree();
}
