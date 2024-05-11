/*
** EPITECH PROJECT, 2023
** my_putstr.c
** File description:
** my_putstr.c
*/

#include "my.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int my_putstr(char const *str)
{
    int cpt = 0;

    while (str[cpt] != '\0') {
        my_putchar(str[cpt]);
        cpt = cpt + 1;
    }
    return cpt - 1;
}
