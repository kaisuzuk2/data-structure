#include "allocate.h"

int get(int in_index)
{
    if (in_index < 0)
        return (-1);
    else if (in_index >= g_current)
        return (-1);
    return (g_array[g_current - 1]);
}
