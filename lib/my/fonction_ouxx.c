/*
** EPITECH PROJECT, 2023
** fonction_ouxX.c
** File description:
** flags ouxX
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "my.h"

int hexamin(va_list list)
{
    return (my_putnbr_base_x(va_arg(list, unsigned int)) + 1);
}

int octale(va_list list)
{
    return (my_putnbr_base_o(va_arg(list, unsigned int)) + 1);
}

int hexamaj(va_list list)
{
    return (my_putnbr_base_xmaj(va_arg(list, unsigned int)) + 1);
}

int floatnbr(va_list list)
{
    return (my_put_float(va_arg(list, double)) + 1);
}

int ptradd(va_list list)
{
    return (pointadd(va_arg(list, unsigned long long)) + 1);
}
