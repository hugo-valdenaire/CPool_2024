/*
** EPITECH PROJECT, 2019
** delivery
** File description:
** my_apply_on_node
*/

#include "mylist.h"
#include <stdlib.h>

int my_apply_on_nodes(linked_list_t *begin, int(*f)(void *))
{
    while (begin->next != NULL) {
        (*f)(begin->data);
        begin = begin->next;
    }
    return (0);
}