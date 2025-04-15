#include "structure.h"

int set_element(int in_index, int in_number, char *in_name)
{
    if (in_index < 0)
        return (-1);
    else if (in_index >= dMAX)
        return (-1);
    g_data[in_index].number = in_number;
    strcpy(g_data[in_index].name, in_name);
    return (0);
}
