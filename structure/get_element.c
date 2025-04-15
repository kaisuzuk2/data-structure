#include "structure.h"

t_data *get_element(int in_index)
{
    if (in_index < 0)
        return (NULL);
    else if (in_index >= dMAX)
        return (NULL);
    return (&g_data[in_index]);
}
