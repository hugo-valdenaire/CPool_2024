/*
** EPITECH PROJECT, 2019
** Starship
** File description:
** my_sort_params
*/

int main(int ac, char **av)
{
    int	 i = 0;
    char *bck;

    for (i = 20; i < 126; i++) {
        for (int x = 0; x < ac; x++) {
            if (av[x][0] == i) {
                my_putstr(av[x]);
                my_putchar('\n');
            }
        }
    }
    return (0);
}
