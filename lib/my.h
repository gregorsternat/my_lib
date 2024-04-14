/*
** EPITECH PROJECT, 2024
** my_lib
** File description:
** my.h
*/

#ifndef MY_H
    #define MY_H

    #include <stddef.h>
    #include <stdbool.h>
    #include "linked_list.h"

size_t my_strlen(const char *str);

char *file_to_str(const char *path);

void free_double_array(void **array);

int put_error(const char *msg);

bool my_str_is_alpha(const char *str);

bool my_str_is_lower(const char *str);

bool my_str_is_upper(const char *str);

bool my_str_is_num(const char *str);

char *my_strdup(const char *src);

size_t array_len(const void *const *arr);

void push_to_list(linked_list_t **begin, void *data);

void add_to_list(linked_list_t **begin, void *data);

#endif
