/*
** EPITECH PROJECT, 2019
** 
** File description:
** 
*/

int my_swap_char(char *a, char *b)
{
    char c = *a;
    *a = *b;
    *b = c;
    return (0);
}

char *my_evil_str(char *str)
{
    int b = my_strlen(str) - 1;
    int a = 0;

    for (; a < b; a++, b--)
        my_swap_char(str + a, str + b);
    return (str);
}