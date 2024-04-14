/*
** EPITECH PROJECT, 2024
** my_lib
** File description:
** Copies a string by allocating memory
*/

#include <stddef.h>
#include <stdlib.h>
#include "my.h"

char *my_strdup(const char *src)
{
    size_t src_len = 0;
    char *dest = NULL;

    if (src == NULL)
        return NULL;
    src_len = my_strlen(src);
    dest = malloc(sizeof(char) * (src_len + 1));
    if (dest == NULL)
        return NULL;
    for (size_t i = 0; i != src_len; i++) {
        dest[i] = src[i];
    }
    dest[src_len] = '\0';
    return dest;
}
