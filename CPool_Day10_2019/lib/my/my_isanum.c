/*
** EPITECH PROJECT, 2019
** delivery
** File description:
** my_isanum
*/

int my_isanum(char c)
{
    if ((c < '0' || c > '9') && (c < 'A' || c > 'Z') && (c < 'a' || c > 'z'))
        return (1);
    return (0);
}