#include "fifo.h"

void init_list(void)
{
    if (g_top != NULL)
        free_list();
    g_top = g_bottom = NULL;
}
