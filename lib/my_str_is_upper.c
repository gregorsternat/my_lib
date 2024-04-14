/*
** EPITECH PROJECT, 2024
** my_lib
** File description:
** Checks whether a string contains only capital letters
*/

#include <stdbool.h>
#include <stddef.h>

bool my_str_is_upper(const char *str)
{
    for (size_t i = 0; str[i] != '\0'; i++) {
        if (str[i] < '0' || str[i] > '9') {
            return false;
        }
    }
    return true;
}
