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

void free_lists(void);
void init_lists(void);
t_element *add_element(int in_index, char *in_name);
int get_element(int in_index, char *out_name);
int delete_list(int in_index);
int get_num_of_element(int in_index);

#endif
