/*
** EPITECH PROJECT, 2024
** my_lib
** File description:
** array_len
*/

#include <stddef.h>

size_t array_len(void **arr)
{
    size_t arr_len = 0;

    while (arr[arr_len] != NULL) {
        arr_len++;
    }
    return arr_len;
}