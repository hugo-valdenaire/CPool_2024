/*
** EPITECH PROJECT, 2019
** Starship
** File description:
** my_revstr
*/

int my_strlen(char const *str)
{
    int i = 0;

    for (; str[i] != 0; i++);
    return (i);
}

int my_swap_char(char *a, char *b)
{
    char c = *a;
    *a = *b;
    *b = c;
    return (0);
}

char *my_revstr(char *str)
{
    int b = my_strlen(str) - 1;
    int a = 0;

    for (; a < b; a++, b--)
        my_swap_char(str + a, str + b);
    return (str);
}