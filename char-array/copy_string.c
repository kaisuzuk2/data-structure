#include "char_array.h"

int copy_string(char *in_str1, char *in_str2)
{
    char *p, *q;

    p = in_str1;
    q = in_str2;
    while (*q)
    {
        *p++ = *q++;
    }
    *p = *q;
    return (0);
}
