/*
** EPITECH PROJECT, 2023
** conditional1
** File description:
** conditional1
*/
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include "my.h"

int my_printf(const char *format, ...)
{
    va_list list;
    int i = 0;
    int len = 0;

    va_start(list, format);
    while (format[i] != '\0') {
        if (format[i] == '%') {
            len = len + parsing(&i, format, list);
        } else {
            my_putchar(format[i]);
            len = len + 1;
        }
        i = i + 1;
    }
    return len;
}
