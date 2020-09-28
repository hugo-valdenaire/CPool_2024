/*
** EPITECH PROJECT, 2019
** Starship
** File description:
** my
*/

#ifndef MY_H_
#define MY_H_

int my_isneg(int n);
int my_isanum(char c);
int my_put_nbr(int nb);
int my_is_prime(int nb);
void my_putchar(char c);
char *my_revstr(char *str);
void my_swap(int *a, int *b);
char *my_strupcase(char *str);
int my_find_prime_sup(int nb);
int my_strlen(char const *str);
int my_putstr(char const *str);
int my_getnbr(char const *str);
char *my_strlowcase(char *str);
int my_showstr(char const *str);
int negapply(int neg, int value);
int my_str_isnum(char const *str);
char *my_strcapitalize(char *str);
int my_swap_char(char *a, char *b);
int my_compute_square_root(int nb);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_str_isalpha(char const *str);
int condition_check(int mul, int nb);
int my_compute_power_rec(int nb, int p);
int my_str_isprintable(char const *str);
int my_showmem(char const *str, int size);
void my_sort_int_array(int *array, int size);
char *my_strcat(char *dest, char const *src);
char *my_strcpy(char *dest, char const *src);
int my_strcmp(char const *s1, char const *s2);
char *my_strstr(char *str, char const *to_find);
int check(char *str, char const *to_find, int curs);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strncat(char *dest, char const *src, int nb);
int my_strncmp(char const *s1, char const *s2, int n);

#endif /* !MY_H_ */