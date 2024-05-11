/*
** EPITECH PROJECT, 2023
** my_put_nbr.c
** File description:
** my_put_nbr.c
*/
#include <unistd.h>
#include "my.h"

static int init_cpt(int nb)
{
    int result = 0;

    while (nb != 0) {
        nb = nb / 10;
        result = result + 1;
    }
    return (result - 1);
}

int my_putnbr_u(unsigned int nb)
{
    int compteur = init_cpt(nb);
    int puissance = 1;
    unsigned int affiche = 0;
    int count = compteur;

    while (compteur != 0) {
        puissance = puissance * 10;
        compteur = compteur - 1;
    }
    while (puissance >= 1) {
        affiche = nb / puissance;
        my_putchar(affiche + 48);
        nb = nb % puissance;
        puissance = puissance / 10;
    }
    return count;
}
