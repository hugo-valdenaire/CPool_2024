/*
** EPITECH PROJECT, 2019
** Project Name
** File description:
** [file description here]
*/

int my_compute_factorial_rec(int nb)
{
    if (nb > 0 && nb <= 12)
        return (my_compute_factorial_rec(nb - 1) *nb );
    else if (nb == 0)
        return (1);
    else
        return (0);
}
