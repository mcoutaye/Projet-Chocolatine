/*
** EPITECH PROJECT, 2023
** show_tab
** File description:
** code on paper!
*/
#include <stddef.h>
#include "my.h"

void show_tab(char **tab)
{
    if (!tab)
        return;
    for (int i = 0; tab[i]; i++)
        my_printf("%s\n", tab[i]);
}
