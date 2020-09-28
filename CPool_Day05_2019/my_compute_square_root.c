/*
** EPITECH PROJECT, 2019
** 
** File description:
** 
*/

int my_compute_square_root(int nb)
{
    int res = 1;

    for (; res * res != nb; res++)
        if (res > nb)
            return (0);
    return (res);
}
