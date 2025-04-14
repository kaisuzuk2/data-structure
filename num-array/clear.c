#include "num_array.h"

void clear(void)
{
    int i;

    i = 0;
    while (i < dMAX)
    {
        g_values[i] = 0;
        i++;
    }
}
