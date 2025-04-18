#include "lru.h"

t_element *g_top = NULL;
t_element *g_bottom = NULL;
t_element *g_current = NULL;
int g_count = 0;

void init_list(void)
{
    if (g_top != NULL)
        free_list();
    g_top = g_bottom = g_current = NULL;
    g_count = 0;
}
