/*
** EPITECH PROJECT, 2019
** Starship
** File description:
** my_strcat
*/

int my_strlen(char *str);

char *my_strcat(char *dest, char const *src)
{
    int curs = 0;
    char str[my_strlen(dest) + my_strlen(src) + 1];

    for (int  i = 0; dest[i] != 0; i++, curs++)
        str[curs] = dest[i];
    for (int  x = 0; src[x] != 0; x++, curs++)
        str[curs] = src[x];
    str[curs] = 0;
    return (str);
}