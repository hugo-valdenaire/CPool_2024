/*
** EPITECH PROJECT, 2019
** a
** File description:
** a
*/

int my_strlen(char const *str)
{
    int i = 0;

    for (; str[i] != 0; i++);
    return (i);
}
