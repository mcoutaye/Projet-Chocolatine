/*
** EPITECH PROJECT, 2023
** my_strdup
** File description:
** you're a bad developer
*/
#include <stdio.h>
#include <stdlib.h>
#include "my.h"

char *my_strdup(char *str)
{
    int len = 0;
    char *str2 = NULL;

    if (!str)
        return NULL;
    len = my_strlen(str);
    str2 = malloc(sizeof(char *) * len + 1);
    for (unsigned int i = 0; str[i]; i++)
        str2[i] = str[i];
    str2[len] = '\0';
    return str2;
}
