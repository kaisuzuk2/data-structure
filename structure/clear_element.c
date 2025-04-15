#include "structure.h"

int clear_element(int in_index)
{
    if (in_index < 0)
        return (-1);
    else if (in_index >= dMAX)
        return (-1);
    g_data[in_index].number = -1;
    strcpy(g_data[in_index].name, "\0");
    return (0);
}
