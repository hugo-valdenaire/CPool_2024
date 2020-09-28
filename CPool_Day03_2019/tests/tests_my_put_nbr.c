/*
** EPITECH PROJECT, 2019
** test_my_put_nbr
** File description:
** test_my_put_nbr
*/

int main(void)
{
    my_put_nbr(-2147483648);
    my_put_nbr(2147483647);
    my_put_nbr(0);
    my_put_nbr(21);
    my_put_nbr(-21);
    return (0);
}
