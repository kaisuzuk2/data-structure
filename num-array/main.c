#include <stdio.h>
#include "num_array.h"

int main(void)
{
    int i;

    clear();

    for (i = 0; i < dMAX; i++)
    {
        printf("%d ", get(i));
    }
    printf("\n");

    set(3, 2);
    set(5, 1);

    for (i = 0; i < dMAX; i++)
    {
        printf("%d ", get(i));
    }
    printf("\n");
}
