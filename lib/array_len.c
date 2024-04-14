/*
** EPITECH PROJECT, 2024
** my_lib
** File description:
** Returns the number of cells in an array
*/

#include <stddef.h>

size_t array_len(const void *const *arr)
{
    size_t arr_len = 0;

    while (arr[arr_len] != NULL) {
        arr_len++;
    }
    return arr_len;
}
