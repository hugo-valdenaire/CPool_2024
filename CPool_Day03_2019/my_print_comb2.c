/*
** EPITECH PROJECT, 2019
** my_print_comb2
** File description:
** my_print_comb2
*/

int display(int a)
{
    int na;
    int nb;
    na = a / 10 + 48;
    nb = a % 10 + 48;
    my_putchar(na);
    my_putchar(nb);
    return (0);
}

int my_print_comb2(void)
{
    int b = 0;
    for (int a = 0; a < 100; a++) {
        for (int b = a + 1; b < 100; b++) {
            display(a);
            my_putchar(' ');
            display(b);
            if (a != 98 || b != 99) {
                my_putchar(',');
                my_putchar(' ');
            }
        }
    }
}

