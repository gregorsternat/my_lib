/*
** EPITECH PROJECT, 2024
** my_lib
** File description:
** Returns the length of a string
*/

#include <stddef.h>

size_t my_strlen(const char *str)
{
    size_t len = 0;

    while (str[len] != '\0') {
        len++;
    }
    return len;
}
