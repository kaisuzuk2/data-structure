#ifndef TREE_H
# define TREE_H

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

# define dNAMEMAX 20

typedef struct s_element {
    int index;
    char name[dNAMEMAX];
    struct s_element *left;
    struct s_element *right;
} t_element;

extern t_element *g_top;
extern int g_count;

void free_element(t_element *in_element);
void free_tree(void);
void init_tree(void);
t_element *add_element(int in_index, char *in_name);
t_element *search_element(int in_index);
t_element *top(void);
t_element *left(t_element *in_element);
t_element *right(t_element *in_element);
int get_num_of_element(void);
void print_element(t_element *in_element);

#endif
