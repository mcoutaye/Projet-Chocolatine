/*
** EPITECH PROJECT, 2023
** my_strcmp
** File description:
** jiejjjd
*/
#include <stdbool.h>
#include "my.h"
#include <stdlib.h>

bool my_strcmp(char *s1, char *s2)
{
    int a = my_strlen(s1);
    int b = my_strlen(s2);

    if (a != b)
        return false;
    for (int i = 0; s1[i]; i++){
        if (s1[i] != s2[i])
            return false;
    }
    return true;
}
