/*
** EPITECH PROJECT, 2024
** free_tab
** File description:
** perfect free_tab
*/
#include "my.h"
#include <stdlib.h>

void free_tab(char **tab)
{
    if (!tab)
        return;
    for (int i = 0; tab[i]; i++)
        free(tab[i]);
    free(tab);
    return;
}
