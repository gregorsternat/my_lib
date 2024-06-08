/*
** EPITECH PROJECT, 2024
** my_lib
** File description:
** free_all
*/

#include <stddef.h>
#include <stdarg.h>

void free_all(size_t len_to_free, ...)
{
    va_list parameters = NULL;

    va_start(parameters, len_to_free);
    for (size_t i = 0; i < len_to_free; i++) {
        free(va_arg(parameters, void *));
    }
    va_end(parameters);
}
