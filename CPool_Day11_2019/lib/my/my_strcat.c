/*
** EPITECH PROJECT, 2019
** Starship
** File description:
** my_strcat
*/

int my_strlen(char *str);

char *my_strcat(char *dest, char const *src)
{
    char *res = malloc(sizeof(char) * my_strlen(dest) + my_strlen(src) + 1);
    int len = my_strlen(src);
    int curs = 0;

    for (;src[curs] != 0; curs++)
        res[curs] = src[curs];
    for (curs = 0; dest[curs] != 0; curs++)
        res[len++] = dest[curs];
    res[len] = 0;
    return (res);
}