#include "fifo.h"


t_element *g_top = NULL;
t_element *g_bottom = NULL;

int main(void)
{
    char name[dNAMEMAX];

    init_list();
    set_element("taro");
    set_element("hanako");
    free_list();
    set_element("tama");
    set_element("pochi");
    set_element("hanako");

    while (get_element(name) != -1)
        printf("name = %s\n", name);
    free_list();
}
