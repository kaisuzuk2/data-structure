#ifndef STRUCTURE_H
# define STRUCTURE_H

# define dMAX 10
# define dNAMEMAX 20

#include <string.h>

typedef struct s_data {
    int number;
    char name[dNAMEMAX];
} t_data;

t_data g_data[dMAX];

int clear_element(int in_index);
void clear_all(void);
t_data *get_element(int in_index);
int set_element(int in_index, int in_number, char *in_name);
t_data *search_element(int in_number);

#endif
