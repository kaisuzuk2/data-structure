#ifndef CIRCULAR_H
# define CIRCULAR_H

#include <stdlib.h>
#include <string.h>

#define dNAMEMAX 20

typedef struct s_element {
    int index;
    char name[dNAMEMAX];
    struct s_element *prev;
    struct s_element *next;
} t_element;

extern t_element *g_current;
extern int g_count;

void free_list(void);
void init_list(void);
t_element *insert_element(int in_index ,char *in_name);

#endif
