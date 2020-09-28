/*
** EPITECH PROJECT, 2019
** Starship
** File description:
** my_rev_params
*/

int main(int ac, char **av)
{
    int i = ac - 1;
    for (; i >= 0; i--) {
        my_putstr(av[i]);
        my_putchar('\n');
    }
    return (0);
}