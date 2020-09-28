/*
** EPITECH PROJECT, 2019
** Starship
** File description:
** my
*/

#ifndef MY_H_
#define MY_H_

int my_compute_power_rec(int nb, int p);
int my_compute_square_root(int nb);
int my_find_prime_sup(int nb);
int my_getnbr(char const *str);
int my_is_prime(int nb);
int my_isneg(int n);
int my_put_nbr(int nb);
void my_putchar(char c);
int my_isanum(char c);
int my_putstr(char const *str);
char *my_revstr(char *str);
void my_sort_int_array(int *array, int size);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);
int my_strcmp(char const *s1, char const *s2);
char *my_strcpy(char *dest, char const *src);
int my_strlen(char const *str);
char *my_strlowcase(char *str);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strstr(char *str, char const *to_find);
char *my_strupcase(char *str);
void my_swap(int *a, int *b);

#endif /* !MY_H_ */