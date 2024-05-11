/*
** EPITECH PROJECT, 2024
** is_a_digits
** File description:
** digits
*/
#include "my.h"
#include <stdbool.h>

bool is_a_digits(char c)
{
    if ('0' <= c && c <= '9')
        return true;
    return false;
}
