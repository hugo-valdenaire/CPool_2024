/*
** EPITECH PROJECT, 2019
** Starship
** File description:
** my_strcat
*/

int my_strlen(char *str);

char *my_strncat(char *dest, char const *src, int nb)
{
    int curs = 0;
    char str[my_strlen(dest) + nb + 1];

    for (int  i = 0; dest[i] != 0; i++, curs++)
        str[curs] = dest[i];
    for (int  x = 0; x < nb; x++, curs++)
        str[curs] = src[x];
    str[curs] = 0;
    return (str);
}