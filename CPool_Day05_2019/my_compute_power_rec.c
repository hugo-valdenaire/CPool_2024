/*
** EPITECH PROJECT, 2019
** 
** File description:
** 
*/

int my_compute_power_rec(int nb, int p)
{
    if (p < 0)
        return (0);
    if (p == 0)
        return (1);
    else
        return (nb * my_compute_power_rec(nb, p - 1));
}
