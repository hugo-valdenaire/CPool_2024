/*
** EPITECH PROJECT, 2019
** Starship
** File description:
** my_strupcase
*/

char *my_strlowcase(char *str)
{
    for (int i = 0; str[i] != 0; i++) {
        if (str[i] > 'A' && str[i] < 'Z' )
            str[i] += 32;
    }
    return (str);
}