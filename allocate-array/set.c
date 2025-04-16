#include "allocate.h"

int set(int in_value)
{
    if (g_current >= g_capacity)
        realloc_memory();
    g_array[g_current] = in_value;
    g_current++;
    return (in_value);
}
