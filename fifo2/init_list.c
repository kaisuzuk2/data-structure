#include "fifo2.h"

t_element *g_top = NULL;
t_element *g_bottom = NULL;
int g_counter = 0;

void init_list(void)
{
    if (g_top != NULL)
        free_list();
    g_top = g_bottom = NULL;
    g_counter = 0;
}
