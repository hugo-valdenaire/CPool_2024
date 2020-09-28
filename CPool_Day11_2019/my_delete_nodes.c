/*
** EPITECH PROJECT, 2019
** delivery
** File description:
** my_delete_nodes
*/

#include "mylist.h"
#include <stdlib.h>

int my_deletes_nodes(linked_list_t **begin, void const *data_ref,
int (*cmp)())
{
    linked_list_t *node = *begin;
    linked_list_t *previous = NULL;
    linked_list_t *next = NULL;

    while (node != NULL) {
        if ((cmp(node->data, data_ref)) == 0)
            previous->next = node->next;
        previous = node;
        node = node->next;
    }
    return (0);
}