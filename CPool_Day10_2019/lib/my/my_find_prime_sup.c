/*
** EPITECH PROJECT, 2019
** a
** File description:
** a
*/

int my_is_prime(int nb);

int my_find_prime_sup(int nb)
{
    int prime = 0;

    while (prime != 1)
        prime = my_is_prime(nb++);
    return (--nb);
}
