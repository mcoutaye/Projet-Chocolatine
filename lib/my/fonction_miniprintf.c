/*
** EPITECH PROJECT, 2023
** fonction_miniprintf
** File description:
** miniprintf
*/

#include "my.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

int digits(va_list list)
{
    return (my_put_nbr(va_arg(list, int)));
}

int characters(va_list list)
{
    my_putchar((char)va_arg(list, int));
    return 1;
}

int modulo(va_list list)
{
    (void)list;
    my_putchar('%');
    return 1;
}

int string(va_list list)
{
    return (my_putstr(va_arg(list, char *)) + 1);
}

int backslash(va_list list)
{
    (void)list;
    return 0;
}
