#include "char_array.h"

int add_string(char *in_str1, char *in_str2)
{
    char *p, *q;

    p = in_str1;
    q = in_str2;
    while (*p)
        p++;
    while (*q)
    {
        *p = *q;
        p++;
        q++;
    }
    *p = '\0';
    return (0);
}
