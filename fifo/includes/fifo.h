#ifndef FIFO_H
# define FIFO_H

#define dNAMEMAX 20

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct s_element {
    char name[dNAMEMAX];
    struct s_element *next;
} t_element;

extern t_element *g_top;
extern t_element *g_bottom;

void free_list(void);
void init_list(void);
int get_element(char *out_name);
t_element *set_element(char *in_name);
#endif
