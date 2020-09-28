/*
** EPITECH PROJECT, 2019
** delivery
** File description:
** my_params_to_list
*/

#include "mylist.h"
#include <stdlib.h>

linked_list_t *create_node(linked_list_t *list, char *str)
{
    linked_list_t *element;

    element = malloc(sizeof(*element));
    element->next = list;
    element->data = str;
    return element;
}

linked_list_t *my_params_to_list(int ac, char * const *av)
{
    struct linked_list *element;

    if (av == NULL || ac == 0)
        return element;
    element = malloc(sizeof(*element));
    element->next = NULL;
    element->data = av[0];
    for (int i = 1; i < ac; i++)
        element = create_node(element, av[i]);
    return (element);
}

int main(void)
{
    my_params_to_list(0, NULL);
    return (0);
}