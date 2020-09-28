/*
** EPITECH PROJECT, 2019
** delivery
** File description:
** do-op
*/

#include "my.h"

int do_op(char *nb1, char *op, char *nb2)
{
    if (op[0] == '+')
        return (my_getnbr(nb1) + my_getnbr(nb2));
    if (op[0] == '-')
        return (my_getnbr(nb1) - my_getnbr(nb2));
    if (op[0] == '*')
         return (my_getnbr(nb1) * my_getnbr(nb2));
    if (op[0] == '/')
         return (my_getnbr(nb1) / my_getnbr(nb2));
    return ();
}

int main(int ac, char **av)
{
    if (ac != 4)
        return (84);
    if (av[2][0] < 37 || av[2][0] > 47) {
        my_putchar('0');
        return (84);
    }
    //check_nbr
    if (do_op(av[1], av[2], av[3]) == 1)
        return (84);
    return (0);
}