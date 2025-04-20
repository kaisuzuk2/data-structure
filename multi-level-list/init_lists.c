#include "multi.h"

t_list *g_top = NULL;
t_list *g_bottom = NULL;

void init_lists(void)
{
    if (g_top != NULL)
        free_lists();
    g_top = g_bottom = NULL;
}
