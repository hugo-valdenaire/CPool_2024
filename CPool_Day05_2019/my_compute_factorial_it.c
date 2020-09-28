/*
** EPITECH PROJECT, 2019
** Project Name
** File description:
** [file description here]
*/

int my_compute_factorial_it(int nb)
{
    int i = 1;

    if (nb == 0)
        return (1);
    if (nb < 0)
        return (0);
    if (nb <= 12) {
        for (; nb > 0; nb--)
            i = i * nb;
    return (i);
    } else
        return (0);
}
