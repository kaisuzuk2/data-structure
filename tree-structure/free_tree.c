#include "tree.h"

void free_tree(void)
{
    if (g_top != NULL)
        free_element(g_top);
    g_top = NULL;
    g_count = 0;
}
