/*
** EPITECH PROJECT, 2024
** my_lib
** File description:
** my_strlen.c
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