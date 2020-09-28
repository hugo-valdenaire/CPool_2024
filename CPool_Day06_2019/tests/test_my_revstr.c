/*
** EPITECH PROJECT, 2019
** Project Name
** File description:
** [file description here]
*/
#include <criterion/criterion.h>

char *my_revstr(char *str);

Test(my_revstr, reversing_string)
{
    char str[6] = "hello";

    cr_assert_str_eq(my_revstr(str), "olleh");
}
