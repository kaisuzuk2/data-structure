#ifndef CHAR_ARRAY
#define CHAR_ARRAY

# define dMAX 20

char g_str1[dMAX];
char g_str2[dMAX];

void clear(char *in_str);
char get_char(char *in_str, int in_index);
int set_char(char *in_str, int in_index, char in_value);
int copy_string(char *in_str1, char *in_str2);
int compare_string(char *in_str1, char *in_str2);
int add_string(char *in_str1, char *in_str2);

#endif
