/*
** EPITECH PROJECT, 2024
** my_lib
** File description:
** Writes a message set in parameters
*/

#include <unistd.h>
#include "my.h"

int my_put_str(const char *str)
{
    if (write(1, str, my_strlen(str)) == -1)
        return -1;
    return 0;
}
