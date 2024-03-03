/*
** EPITECH PROJECT, 2024
** my_lib
** File description:
** my_str_is_lower.c
*/

#include <stdbool.h>
#include <stddef.h>

bool my_str_is_lower(const char *str)
{
    for (size_t i = 0; str[i] != '\0'; i++) {
        if (str[i] < 'a' || str[i] > 'z') {
            return false;
        }
    }
    return true;
}
