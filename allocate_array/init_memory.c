#include "allocate.h"

int init_memory(void)
{
    g_max = dALLOCATE_STEP;
    g_value = calloc(sizeof(int), g_max);
    if (g_value == NULL)
        return (-1);
    return (0);
}
