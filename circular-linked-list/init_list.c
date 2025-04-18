#include "circular.h"

t_element *g_current = NULL;
int g_count = 0;

void init_list(void)
{
    if (g_current != NULL)
        free_list();
    g_current = NULL;
    g_count = 0;
}
