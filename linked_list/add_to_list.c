/*
** EPITECH PROJECT, 2024
** my_lib
** File description:
** Adds a new node to the beginning of a linked list
*/

#include <stdlib.h>
#include "linked_list.h"

void add_to_list(linked_list_t **begin, void *data)
{
    linked_list_t *new_node = malloc(sizeof(linked_list_t));

    if (new_node == NULL)
        return;
    new_node->data = data;
    new_node->next = (*begin);
    (*begin) = new_node;
}
