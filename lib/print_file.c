/*
** EPITECH PROJECT, 2024
** my_lib
** File description:
** Function to print a file
*/

#include "my.h"

int print_file(const char *path)
{
    char *buff_file = file_to_str(path);

    if (buff_file == NULL)
        return -1;
    if (my_put_str(buff_file) != -1)
        return -1;
    return 0;
}
