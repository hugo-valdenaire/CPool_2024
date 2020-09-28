/*
** EPITECH PROJECT, 2019
** my_put_nbr
** File description:
** my_put_nbr
*/

void my_putchar(char c);

int condition_check(int mul, int nb)
{
    if (nb == 0)
        my_putchar('0');
    if (mul != 1000000000)
        mul /= 10;
    return (mul);
}

int my_put_nbr(int nb)
{
    int b = nb;
    int mul = 1;

    if (nb < 0)
        my_putchar('-');
    for (; b != 0; b /= 10) {
        mul *= 10;
        if (mul == 1000000000)
            b = 0;
    }
    mul = condition_check(mul, nb);
    while (mul > 0) {
        if (nb < 0)
            my_putchar(((nb / mul) % 10) * -1 + 48);
        else
            my_putchar(nb / mul % 10 + 48);
        mul = mul / 10;
    }
    return (0);
}
