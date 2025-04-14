#include "char_array.h"
#include <stdio.h>

int main(void)
{
    clear(g_str1);
    clear(g_str2);
    printf("g_str1 = %s / g_str2 = %s\n", g_str1, g_str2);

    copy_string(g_str1, "test1");
    copy_string(g_str2, "test2");
    printf("g_str1 = %s / g_str2 = %s\n", g_str1, g_str2);
    printf("compare = %d\n", compare_string(g_str1, g_str2));

    set_char(g_str2, 4 ,'1');
    printf("g_str1 = %s / g_str2 = %s\n", g_str1, g_str2);
    printf("compare = %d\n", compare_string(g_str1, g_str2));

    add_string(g_str1, g_str2);
    printf("g_str1 = %s / g_str2 = %s\n", g_str1, g_str2);

    printf("getchar = g_str1(2) = %c\n", get_char(g_str1, 2));
}
