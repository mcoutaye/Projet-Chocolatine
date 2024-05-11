/*
** EPITECH PROJECT, 2024
** isaletter
** File description:
** isaletter
*/
#include <stdbool.h>
#include <stdio.h>

bool is_a_letter(char c)
{
    if ('a' <= c && c <= 'z')
        return true;
    if ('A' <= c && c <= 'Z')
        return true;
    return false;
}
