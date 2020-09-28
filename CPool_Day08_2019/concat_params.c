/*
** EPITECH PROJECT, 2019
** delivery
** File description:
** concat_params
*/

#include "my.h"
#include <stdlib.h>

char *concat_params(int ac, char **av)
{
    char *str;
    int len  = 0;
    int i = 0;

    for (int i = ac - 1; i >= 0; i--)
        len = len + my_strlen(av[i]);
    str = malloc(sizeof(char) * len + ac);
    for (; i < ac; i++) {
        my_strcat(str, av[i]);
        my_strcat(str, "\n");
    }
    if (i == ac)
        str[len + ac - 1] = 0;
    return (str);
}