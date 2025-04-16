#ifndef ALLOCATE_H
# define ALLOCATE_H

#include <stdlib.h>

#define ALLOCATE 10

extern int *g_array;
extern int g_current;
extern int g_capacity;

void init(void);
int realloc_memory(void);
int get(int in_index);
int set(int in_value);
#endif
