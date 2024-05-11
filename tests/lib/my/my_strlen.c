/*
** EPITECH PROJECT, 2023
** my_strlen.c
** File description:
** my_strlen.c
*/
#include <unistd.h>

int my_strlen(char const *str)
{
    int i = 0;

    if (!str)
        return 0;
    for (; str[i]; i++);
    return i;
}
