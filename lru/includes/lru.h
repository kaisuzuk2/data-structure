#ifndef LRU_H
# define LRU_H

#include <stdlib.h>
#include <string.h>

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
t_element *top(void);
t_element *bottom(void);
t_element *next(void);
t_element *prev(void);
t_element *search_element(int in_index);
int get_num_of_element(void);

#endif
