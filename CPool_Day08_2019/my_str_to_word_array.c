/*
** EPITECH PROJECT, 2019
** starship
** File description:
** my_str_to_word_array
*/

#include "my.h"
#include <stdlib.h>
#include <stdio.h>

char *my_strdup(char const *str);

char **fill_tab(char **tab, char *str)
{
    int curs = 0;
    int origin = 0;

    for (int i = 1; str[i] != 0; i++) {
        if (my_isanum(str[i]) == 1 && my_isanum(str[i - 1]) == 0) {
            str[i++] = 0;
            tab[curs++] = str + origin;
            origin = i;
            while (my_isanum(str[origin]) == 1)
                origin++;
        }
        if (str[i + 1] == 0 && my_isanum(str[i]) == 0)
            tab[curs++] = str + origin;
    }
    return (tab);
}

char **init_tab(char const *str, char **tab)
{
    int word_number = 0;

    for (int i = 1; str[i] != 0; i++) {
        if (my_isanum(str[i]) == 1 && my_isanum(str[i - 1]) == 0)
            word_number++;
        if (my_isanum(str[i]) == 0 && str[i + 1] == 0)
            word_number++;
    }
    tab = malloc(sizeof(char *) * word_number + 1);
    return (tab);
}

char **my_str_to_word_array(char const *str)
{
    char *strm = my_strdup(str);
    char **tab = NULL;

    if (str[0] == 0)
        return (tab);
    tab = init_tab(strm, tab);
    tab = fill_tab(tab, strm);
    return (tab);
}