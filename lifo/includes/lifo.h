#ifndef LIFO_H
# define LIFO_H

#include <string.h>
#include <stdlib.h>

#define dNAMEMAX 20

typedef struct s_element {
    char name[dNAMEMAX];
    struct s_element *next;
} t_element;

extern t_element *g_top;

void free_list(void);
void init_list(void);
void free_element(t_element *in_element);
t_element *get_element(void);
t_element *set_element(char *in_name);

#endif
