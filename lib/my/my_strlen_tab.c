/*
** EPITECH PROJECT, 2023
** my_strlen_tab
** File description:
** xkcd.com/378
*/
#include "my.h"
#include <stddef.h>

int my_strlen_tab(char **tab)
{
    int j = 0;

    if (!tab)
        return 0;
    for (; tab[j] != NULL; j++);
    return j;
}
