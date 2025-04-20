#ifndef MULTI_H
# define MULTI_H

#include <string.h>
#include <stdlib.h>

#define dNAMEMAX 20

typedef struct s_element {
    char name[dNAMEMAX];
    struct s_element *next;
} t_element;

typedef struct s_list {
    int index;
    int counter;
    t_element *top;
    t_element *bottom;
    struct s_list *next;
} t_list;

extern t_list *g_top;
extern t_list *g_bottom;

#endif
