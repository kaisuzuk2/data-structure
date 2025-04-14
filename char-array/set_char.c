#include "char_array.h"

int set_char(char *in_str, int in_index , char in_value)
{
    if (in_index < 0)
        return (-1);
    else if (in_index >= dMAX)
        return (-1);
    in_str[in_index] = in_value;
    return (0);
}
