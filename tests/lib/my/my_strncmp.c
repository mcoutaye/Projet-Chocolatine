/*
** EPITECH PROJECT, 2024
** strncmp
** File description:
** strcmp
*/
#include <stdio.h>
#include <stdbool.h>

bool my_strncmp(char *s1, char *s2, int len)
{
    if (!s1 || !s2)
        return false;
    for (int i = 0; i < len; i++){
        if (s1[i] != s2[i])
            return false;
    }
    return true;
}
