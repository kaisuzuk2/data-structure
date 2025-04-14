#include "char_array.h"

char get_char(char *in_str, int in_index)
{
    if (in_index < 0)
        return ('\0');
    else if (in_index >= dMAX)
        return ('\0');
    return (in_str[in_index]);
}
