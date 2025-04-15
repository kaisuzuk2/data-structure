#include "structure.h"

void clear_all(void)
{
    int i;

    i = 0;
    while (i < dMAX)
    {
        clear_element(i);
        i++;
    }
}
