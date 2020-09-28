/*
** EPITECH PROJECT, 2019
** Starship
** File description:
** my_strdup
*/

#include <stdlib.h>

char *my_strdup(char const *str)
{
    int i = 0;
    char *dest = malloc(sizeof(char) * my_strlen(str) + 1);

    for (; str[i] != 0; i++)
        dest[i] = str[i];
    dest[i] = 0;
    return (dest);
}