/*
** EPITECH PROJECT, 2019
** delivery
** File description:
** my_list_size
*/

#include "mylist.h"
#include <stdlib.h>

int my_list_size(linked_list_t const *begin)
{
    int i = 1;

    for (;begin->next != NULL; i++) {
        begin = begin->next;
    }
    return (i);
}