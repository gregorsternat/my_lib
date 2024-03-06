/*
** EPITECH PROJECT, 2024
** my_lib
** File description:
** linked_list.h
*/

typedef struct linked_list_s {
    void *data;
    struct linked_list_s *next;
}linked_list_t;