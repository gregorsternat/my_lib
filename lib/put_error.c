/*
** EPITECH PROJECT, 2024
** my_lib
** File description:
** my_put_error.c
*/

#include <unistd.h>
#include "my.h"
#include "macro.h"

int put_error(const char *msg)
{
    if (write(2, msg, my_strlen(msg)) == -1) {
        return EXIT_ERROR;
    }
    return EXIT_SUCCESS;
}