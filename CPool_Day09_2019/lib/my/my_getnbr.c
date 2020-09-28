/*
** EPITECH PROJECT, 2019
** a
** File description:
** a
*/

int my_strlen(char const *str);

int negapply(int neg, int value)
{
    if (neg % 2 == 1)
        value = value * -1;
    return (value);
}

int my_getnbr(char const *str)
{
    int value = 0;
    int mul = 1;
    int neg = 0;
    int i = my_strlen(str) - 1;

    for (; i >= 0; i--) {
        if (str[i] == 45)
            neg++;
        if ((str[i] < 48 || str[i] > 57) && (str[i] != 43 && str[i] != 45)) {
            mul = 1;
            value = neg = 0;
        } else if (str[i] != 43 && str[i] != 45) {
            value = value + ((str[i] - 48) * mul);
            mul *= 10;
        }
        if (value < 0)
            return (0);
    }
    value = negapply(neg, value);
    return (value);
}