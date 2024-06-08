/*
** EPITECH PROJECT, 2024
** my_lib
** File description:
** linked_list.h
*/

#ifndef LINKED_LIST_H
    #define LINKED_LIST_H

typedef struct linked_list_s {
    void *data;
    struct linked_list_s *next;
}linked_list_t;

#endif
