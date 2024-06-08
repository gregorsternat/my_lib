/*
** EPITECH PROJECT, 2024
** my_lib
** File description:
** pAdds a node to the end of a linked list
*/

#include <stdlib.h>
#include "linked_list.h"

void push_to_list(linked_list_t **begin, void *data)
{
    linked_list_t *new_node = malloc(sizeof(linked_list_t));
    linked_list_t *last_node = *begin;

    if (new_node == NULL)
        return;
    new_node->data = data;
    new_node->next = NULL;
    if (*begin == NULL) {
        *begin = new_node;
        return;
    }
    while (last_node->next != NULL) {
        last_node = last_node->next;
    }
    last_node->next = new_node;
}
