#ifndef ALLOCATE_H
# define ALLOCATE_H

#define dALLOCATE_STEP 10

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int g_max = 0;
int *g_value = NULL;

int init_memory(void);

#endif
