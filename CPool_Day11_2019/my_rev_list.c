/*
** EPITECH PROJECT, 2019
** delivery
** File description:
** my_rev_list
*/

#include "my.h"
#include "mylist.h"
#include <stdlib.h>

void my_revlist(linked_list_t **begin)
{
    linked_list_t *previous = NULL;
    linked_list_t *current = *begin;
    linked_list_t *next = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = previous;
        previous = current;
        current = next;
    }
    *begin = previous;
}