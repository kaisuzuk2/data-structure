#include "allocate.h"

void init()
{
    g_array = (int *)malloc(sizeof(int) * ALLOCALTE);
    g_capacity = ALLOCALTE;
}
