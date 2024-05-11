/*
** EPITECH PROJECT, 2023
** my_put_nbr.c
** File description:
** my_put_nbr.c
*/
#include <unistd.h>
#include "my.h"
#include <stdio.h>

int my_put_nbr(int nb)
{
    int puissance = 1;

    if (nb < 0){
        my_putchar('-');
        nb = nb * -1;
    }
    while ((nb / puissance) >= 10)
        puissance = puissance * 10;
    while (puissance > 0){
        my_putchar((nb / puissance) % 10 + '0');
        puissance = puissance / 10;
    }
    return nb;
}
