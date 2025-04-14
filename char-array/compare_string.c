#include "char_array.h"

int compare_string(char *in_str1, char *in_str2)
{
    char *p, *q;

    p = in_str1;
    q = in_str2;
    while (*p && *q)
    {
        if (*p != *q)
            return (*p - *q);
        p++;
        q++;
    }
    return (*p - *q);
}
