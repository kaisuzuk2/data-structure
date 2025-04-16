#include "allocate.h"

int realloc_memory(void)
{
    int *new_arr;

    new_arr = (int *)realloc(g_arr, sizeof(int) * (g_capacity + ALLOCATE));
    if (new_arr == NULL)
        return (-1);
    g_arr = new_arr;
    g_capacity += ALLOCATE;
    return (0);
}
