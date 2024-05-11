/*
** EPITECH PROJECT, 2023
** str_to_word_array.c
** File description:
** uiop
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "my.h"

bool cut(char c, char *separator)
{
    for (int i = 0; separator[i]; i++){
        if (c == separator[i])
            return true;
    }
    return false;
}

int multiple_cut(char const *str, int i, char *separator)
{
    if (cut(str[i], separator) == true){
        for (; cut(str[i], separator) == true; i++);
        i = i - 1;
    }
    return i;
}

int counter(char const *str, char *separator)
{
    int res = 1;

    for (int i = 0; str[i]; i++){
        i = multiple_cut(str, i, separator);
        res = res + 1;
    }
    return res;
}

int strlen_bis(char *str, int i, char *separator)
{
    int len = 0;

    for (; !cut(str[i], separator) && str[i]; len++){
        i++;
    }
    return len;
}

char **my_str_to_word_array(char *str, char *separator)
{
    int nb_words = counter(str, separator) + 2;
    char **tab = malloc(sizeof(char *) * nb_words + 1);
    int i = 0;
    int j = 0;
    int y = 0;

    while (str[i]){
        y = 0;
        for (; cut(str[i], separator) && str[i]; i++);
        tab[j] = malloc(sizeof(char) * (strlen_bis(str, i, separator) + 1));
        for (; !cut(str[i], separator) && str[i]; i++){
            tab[j][y] = str[i];
            y++;
        }
        tab[j][y] = '\0';
        j++;
        for (; cut(str[i], separator) && str[i]; i++);
    }
    tab[j] = NULL;
    return tab;
}
