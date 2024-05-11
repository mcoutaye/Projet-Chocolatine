/*
** EPITECH PROJECT, 2023
** pflag
** File description:
** disp point add
*/
#include "my.h"

int pointadd(unsigned long long add)
{
    int printed = 0;

    printed = my_putstr("0x");
    printed += my_putnbr_base_x(add);
    return printed;
}
