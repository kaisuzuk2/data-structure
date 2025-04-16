#include "allocate.h"

int realloc_memory(void)
{
    int *new_arr;

    new_arr = (int *)realloc(g_array, sizeof(int) * (g_capacity + ALLOCATE));
    if (new_arr == NULL)
        return (-1);
    g_array = new_arr;
    g_capacity += ALLOCATE;
    return (0);
}
