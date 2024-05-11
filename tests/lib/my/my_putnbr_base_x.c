/*
** EPITECH PROJECT, 2023
** pnb
** File description:
** pnbr
*/
#include <unistd.h>
#include "my.h"

static int init_cpt(unsigned long long nb)
{
    int cpt = 0;

    while (nb != 0){
        nb /= 16;
        cpt += 1;
    }
    return (cpt - 1);
}

void my_special_putnbr2(unsigned long long *nb, int display, long long *power)
{
    display = *nb / *power;
    if (display < 10) {
        my_putchar(display + 48);
    } else {
        my_putchar(display + 87);
    }
}

int my_putnbr_base_x(unsigned long long nb)
{
    int cpt = init_cpt(nb);
    long long power = 1;
    int display = 0;
    int count = init_cpt(nb);

    while (cpt != 0){
        power = power * 16;
        cpt = cpt - 1;
    }
    while (power >= 1) {
        my_special_putnbr2(&nb, display, &power);
        nb %= power;
        power /= 16;
    }
    return (count + 1);
}
