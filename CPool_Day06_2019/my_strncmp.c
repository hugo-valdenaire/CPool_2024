/*
** EPITECH PROJECT, 2019
** Starship
** File description:
** my_strncmp
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;
    for (; ((s1[i] == s2[i]) && (s1[i] != 0 && s2[i] != 0)) && i < n; i++);
    if (s1[i] - s2[i] > 0)
        return (1);
    else if (s1[i] - s2[i] == 0)
        return (0);
    else
        return (-1);
}