/*
** EPITECH PROJECT, 2019
** Starship
** File description:
** my_strcat
*/

int my_strlen(char *str);

char *my_strcat(char *dest, char const *src)
{
    int len = my_strlen(dest);
    int curs = 0;

    for (int i = 0; src[i] != 0; i++)
        dest[len++] = src[i];
    dest[len] = 0;
    return (dest);
}