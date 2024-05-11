/*
** EPITECH PROJECT, 2023
** parsing.c
** File description:
** parsing
*/
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include "my.h"

lilmy_t tableau[] = {
    {'%', &modulo},
    {'i', &digits},
    {'d', &digits},
    {'s', &string},
    {'c', &characters},
    {'\0', &backslash},
    {'X', &hexamaj},
    {'x', &hexamin},
    {'o', &octale},
    {'F', &floatnbr},
    {'p', &ptradd},
    {'f', &floatnbr},
    {'?', NULL},
};

int parsing(int *i, const char *format, va_list list)
{
    int p = 0;

    while (tableau[p].action != NULL) {
        if (format[(*i) + 1] == tableau[p].c) {
            (*i) = (*i) + 1;
            return (tableau[p].action(list));
        }
        p = p + 1;
    }
    return *i;
}
