/*
** EPITECH PROJECT, 2019
** Starship
** File description:
** my_strstr
*/

int check(char *str, char const *to_find, int curs)
{
    for (int x = 0; to_find[x] != 0; x++) {
        if (str[curs++] != to_find[x])
            return (0);
    }
    return (1);
}

char *my_strstr(char *str, char const *to_find)
{
    int match = 1;
    int curs = 0;

    for (int i = 0; str[i] !=  0; i++) {
        if (str[i] == to_find[0]){
            if (check(str, to_find, i) == 1)
                return (str + i);
        }
    }
    if (to_find[0] != 0)
        return (0);
    return (str);
}