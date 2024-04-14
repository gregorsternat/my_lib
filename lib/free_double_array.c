/*
** EPITECH PROJECT, 2024
** my_lib
** File description:
** free two-dimensional tables
*/

#include <stddef.h>
#include <stdlib.h>

void free_double_array(void **array)
{
    for (size_t i = 0; array[i] != NULL; i++) {
        free(array[i]);
    }
    free(array);
}
