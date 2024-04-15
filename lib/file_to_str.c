/*
** EPITECH PROJECT, 2024
** my_lib
** File description:
** puts the contents of a file in a char *.
*/

#include <fcntl.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <unistd.h>

char *file_to_str(const char *path)
{
    int fd = open(path, O_RDONLY);
    struct stat file_stat;
    char *buff = NULL;

    if (fd == -1)
        return NULL;
    if (stat(path, &file_stat) == -1)
        return NULL;
    buff = malloc(sizeof(char) * (file_stat.st_size + 1));
    if (buff == NULL)
        return NULL;
    if (read(fd, buff, file_stat.st_size) == -1)
        return NULL;
    buff[file_stat.st_size] = '\0';
    if (close(fd) == -1)
        return NULL;
    return buff;
}
