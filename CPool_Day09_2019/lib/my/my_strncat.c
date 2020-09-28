/*
** EPITECH PROJECT, 2019
** Starship
** File description:
** my_strcat
*/

int my_strlen(char *str);

char *my_strncat(char *dest, char const *src, int nb)
{
    int len = my_strlen(dest);

    for (int  i = 0; i < nb && src[i] != 0; i++)
        dest[len++] = src[i];
    dest[len + 1] = 0;
    return (dest);
}