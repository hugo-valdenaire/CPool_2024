/*
** EPITECH PROJECT, 2019
** 
** File description:
** 
*/

int my_find_prime_sup(int nb)
{
    int prime = 0;

    while (prime != 1)
        prime = my_is_prime(nb++);
    return (--nb);
}
