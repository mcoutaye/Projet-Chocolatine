/*
** EPITECH PROJECT, 2024
** my_strcat
** File description:
** concat 2 strings
*/
#include "my.h"
#include <stddef.h>
#include <stdlib.h>

char *my_strcat(char *s1, char *s2)
{
    char *res = NULL;
    int i = 0;
    int j = 0;

    if (!s1 || !s2)
        return NULL;
    res = malloc(sizeof(char) * (my_strlen(s1) + my_strlen(s2) + 1));
    for (; s1[i]; i++)
        res[i] = s1[i];
    for (; s2[j]; j++)
        res[i + j] = s2[j];
    res[i + j] = '\0';
    return res;
}
