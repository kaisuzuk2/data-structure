#ifndef FIFO2_H
# define FIFO2_H

#define dNAMEMAX 20

#include <string.h>
#include <stdlib.h>

typedef struct s_element {
    char name[dNAMEMAX];
    struct s_element *next;
} t_element;

extern t_element *g_top;
extern t_element *g_bottom;
extern int g_counter;

void free_list(void);
void init_list(void);
void free_element(t_element *in_element);
int get_element(char *out_name);
t_element *set_element(char *in_name);
int get_num_of_element(void);

#endif
