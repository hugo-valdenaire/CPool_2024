/*
** EPITECH PROJECT, 2019
** my_print_comb
** File description:
** my_print_comb
*/

int my_print_comb(void)
{
    int max = 0;

    for (int a = 0; a <= 7; a++) {
        for (int b = a + 1; b <= 8; b++) {
            for (int c = b + 1; c <= 9; c++) {
                max = a + b + c;
                if (max == 24) {
                    my_putchar(a + 48);
                    my_putchar(b + 48);
                    my_putchar(c + 48);
                } else {
                    my_putchar(a + 48);
                    my_putchar(b + 48);
                    my_putchar(c + 48);
                    my_putchar(',');
                    my_putchar(' ');
                }
            }
        }
    }
    return (0);
}
