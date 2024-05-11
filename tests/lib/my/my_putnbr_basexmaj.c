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
        nb /= 16;
        cpt += 1;
    }
    return (cpt - 1);
}

static void my_special_putnbr(unsigned int *nb, int display, int *power)
{
    display = *nb / *power;
    if (display < 10) {
        my_putchar(display + 48);
    } else {
        my_putchar(display + 55);
    }
}

int my_putnbr_base_xmaj(unsigned int nb)
{
    int cpt = init_cpt(nb);
    int power = 1;
    int display = 0;
    int count = init_cpt(nb);

    while (cpt != 0){
        power = power * 16;
        cpt = cpt - 1;
    }
    while (power >= 1) {
        my_special_putnbr(&nb, display, &power);
        nb %= power;
        power /= 16;
    }
    return (count + 1);
}
