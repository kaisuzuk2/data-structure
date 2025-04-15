#include "structure.h"

t_data *search_element(int in_number)
{
    int i;

    i = 0;
    while (i < dMAX)
    {
        if (g_data[i].number == in_number)
            return (&g_data[i]);
        i++;
    }
    return (NULL);
}
