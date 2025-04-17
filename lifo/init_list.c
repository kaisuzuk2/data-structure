#include "lifo.h"

t_element *g_top = NULL;

void init_list(void)
{
    if (g_top != NULL)
        free_list();
    g_top = NULL;
}
