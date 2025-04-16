#include "allocate.h"

int *g_array = NULL;
int g_capacity = 0;
int g_current = 0;

void init()
{
    g_array = (int *)malloc(sizeof(int) * ALLOCATE);
    g_capacity = ALLOCATE;
    g_current = 0;
}
