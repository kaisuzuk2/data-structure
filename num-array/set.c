#include "num_array.h"

int set(int in_index ,int in_value)
{
    if (in_index < 0)
        return (-1);
    else if (in_index >= dMAX)
        return (-1);
    g_values[in_index] = in_value;
    return (0);
}
