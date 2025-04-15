#include "structure.h"
#include <stdio.h>

int main(void)
{
    t_data *p;
    int i;

    clear_all();
    i = 0;
    while (i < dMAX)
    {
        p = get_element(i);
        printf("%d : number = %d / name = %s\n", i, p->number, p->name);
        i++;
    }
    printf("\n");

    set_element(0, 10, "taro");
    set_element(1, 11, "hanako");
    set_element(3, 20, "tama");
    i = 0;
    while (i < dMAX)
    {
        p = get_element(i);
        printf("%d : number = %d / name  %s\n", i, p->number, p->name);
        i++;
    }
    printf("\n");

    p = search_element(11);
    printf("search_element : number = %d / name = %s\n", p->number, p->name);
}
