/*
** EPITECH PROJECT, 2019
** Project Name
** File description:
** [file description here]
*/

int my_compute_power_it(int nb, int p)
{
    int nba = nb;

    if (p == 0)
        return (1);
    if (p < 0)
        return (0);
    for (int pow = p - 1; pow > 0; pow--)
        nb = nb * nba;
    return (nb);
}
