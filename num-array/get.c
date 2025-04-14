#include "num_array.h"

int get(int in_index)
{
    if (in_index < 0)
        return (-1);
    else if (in_index >= dMAX)
        return (-1);
    return (g_values[in_index]);
}
