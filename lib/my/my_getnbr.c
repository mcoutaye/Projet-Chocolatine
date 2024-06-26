/*
** EPITECH PROJECT, 2023
** my_getnbr
** File description:
** my_getnbr
*/
#include "my.h"

int my_getnbr(char *str)
{
    int nb = 0;
    int isneg = 1;
    int i = 0;

    while (str[i] == '-' || str[i] == '+') {
        if (str[i] == '-')
            isneg = isneg * (-1);
        i++;
    }
    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9') {
            nb = nb * 10 + str[i] - '0';
            i++;
        } else
            return (nb * isneg);
    }
    return (nb * isneg);
}
