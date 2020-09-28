/*
** EPITECH PROJECT, 2019
** a
** File description:
** a
*/

int my_is_prime(int nb)
{
    if (nb <= 1)
        return (0);
    for (int c = 2; c < nb; c++)
        if (nb % c == 0)
            return (0);
    return (1);
}