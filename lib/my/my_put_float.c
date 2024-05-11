/*
** EPITECH PROJECT, 2023
** my_put_nbr.c
** File description:
** my_put_nbr.c
*/
#include <unistd.h>
#include "my.h"

static int init_cpt(double nb)
{
    int res = my_put_nbr((int)nb);

    my_putchar('.');
    return (res + 1);
}

int my_put_float(double nb)
{
    int count = init_cpt(nb);
    int accuracy = 0;

    while (accuracy < 6) {
        nb = nb - (int)nb;
        nb = nb * 10;
        if (accuracy < 6 && (int)nb == 0) {
            count = count + my_put_nbr(0);
        } else
            count = count + my_put_nbr((int)nb);
        accuracy = accuracy + 1;
    }
    return count;
}
