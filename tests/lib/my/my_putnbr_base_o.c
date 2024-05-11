/*
** EPITECH PROJECT, 2023
** pnb
** File description:
** pnbr
*/
#include <unistd.h>
#include "my.h"

static int init_cpt(unsigned int nb)
{
    int cpt = 0;

    while (nb != 0){
        nb /= 8;
        cpt += 1;
    }
    return (cpt - 1);
}

int my_putnbr_base_o(unsigned int nb)
{
    int cpt = init_cpt(nb);
    int power = 1;
    int display = 0;
    int count = cpt;

    while (cpt != 0){
        power *= 8;
        cpt -= 1;
    }
    while (power >= 1){
        display = nb / power;
        my_putchar(display + 48);
        nb %= power;
        power /= 8;
    }
    return (count);
}
