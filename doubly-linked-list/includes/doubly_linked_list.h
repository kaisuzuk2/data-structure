#ifndef DOUBLY_LINKED_LIST_H
# define DOUBLY_LINKED_LIST_H

#include <string.h>
#include <stdlib.h>

#define dNAMEMAX 20

typedef struct s_element {
    int index;
    char name[dNAMEMAX];
    struct s_element *prev;
    struct s_element *next;
} t_element;

extern t_element *g_top;
extern t_element *g_bottom;
extern t_element *g_current;
extern int g_count;

void free_list(void);
void init_list(void);
t_element *delete_element(void);
t_element *add_element(int in_index, char *in_name);
t_element *insert_element(int in_index, char *in_name);
t_element *get_current(void);
t_element *top(void);
t_element *bottom(void);
t_element *next(void);
t_element *prev(void);

#endif
