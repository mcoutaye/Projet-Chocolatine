/*
** EPITECH PROJECT, 2024
** units_tests
** File description:
** unit_tests
*/
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../lib/my/my.h"
#include <stdlib.h>
#include <stddef.h>

Test(strcat, null_s1)
{
    cr_assert_eq(my_strcat(NULL, "hello"), NULL);
}

Test(strcat, null_s2)
{
    cr_assert_eq(my_strcat("hello", NULL), NULL);
}

Test(strcat, normal_usage)
{
    my_strcat("hello", "world");
}

Test(strcmp, len_diff)
{
    cr_assert_eq(my_strcmp("hello", "worghjklld"), false);
}

Test(strcmp, letter_diff)
{
    cr_assert_eq(my_strcmp("hello", "hella"), false);
}

Test(strcmp, same_word)
{
    cr_assert_eq(my_strcmp("hello", "hello"), true);
}

Test(strdup, null_string)
{
    cr_assert_eq(my_strdup(NULL), NULL);
}

Test(strdup, normal_dup)
{
    my_strdup("hello");
}

Test(strlen, no_word)
{
    cr_assert_eq(my_strlen(NULL), 0);
}

Test(strlen, normal_strlen)
{
    cr_assert_eq(my_strlen("hello"), 5);
}

Test(strlen_tab, null_tab)
{
    cr_assert_eq(my_strlen_tab(NULL), 0);
}

Test(strlen_tab, normal_strlen_tab)
{
    char **tab = malloc(sizeof(char *) * 3);

    tab[0] = my_strdup("Bonjour");
    tab[1] = my_strdup("tout le monde");
    tab[2] = NULL;
    cr_assert_eq(my_strlen_tab(tab), 2);
}

Test(strncmp, normal_ncmp)
{
    cr_assert_eq(my_strncmp("helloqsdfgh", "helloghjkl", 5), true);
}

Test(strncmp, diff_ncmp)
{
    cr_assert_eq(my_strncmp("helyo", "helloghjkl", 5), false);
}

Test(strncmp, null_s1_ncmp)
{
    cr_assert_eq(my_strncmp(NULL, "sdfgh", 5), false);
}

Test(strncmp, null_s2_ncmp)
{
    cr_assert_eq(my_strncmp("helloqsdfgh", NULL, 5), false);
}

Test(free_tab, normal_free_tab)
{
    char **tab = my_str_to_word_array("hello i love u quentin", " \0");
    free_tab(tab);
}

Test(show_tab, normal_show_tab)
{
    char **tab = my_str_to_word_array("hello   i love u quentin     ", " \0");
    show_tab(tab);
}

Test(show_tab, null_show_tab)
{
    show_tab(NULL);
}

Test(is_a_letter, lowercase_letter)
{
    cr_assert_eq(is_a_letter('a'), true);
}

Test(is_a_letter, uppercase_letter)
{
    cr_assert_eq(is_a_letter('A'), true);
}

Test(is_a_letter, lowercase_letter_z)
{
    cr_assert_eq(is_a_letter('z'), true);
}

Test(is_a_letter, uppercase_letter_z)
{
    cr_assert_eq(is_a_letter('Z'), true);
}

Test(is_a_letter, not_a_letter)
{
    cr_assert_eq(is_a_letter('5'), false);
}

Test(is_a_letter, parenthese)
{
    cr_assert_eq(is_a_letter('{'), false);
}

Test(putnbr, not_a_digits)
{
    cr_assert_eq(my_put_nbr('A'), 65);
}

Test(putnbr, negative)
{
    cr_assert_eq(my_put_nbr(-42), 42);
}

Test(my_printf, normal_printf)
{
    cr_assert_eq(my_printf("%c", 'l'), 1);
}

Test(stwa, multiple_separator)
{
    my_str_to_word_array("---------hihihihhihihh---------", "\t:-\0\n");
}

Test(my_put_float, normal_float)
{
    my_put_float(1.3455);
}

Test(my_put_float, normal_int)
{
    my_put_float(0.042);
}

Test(my_getnbr, operator_sign)
{
    cr_assert_eq(my_getnbr("-+-44094552"), 44094552);
}

Test(my_getnbr, normal_strnbr)
{
    cr_assert_eq(my_getnbr("4254585"), 4254585);
}

Test(my_printf, parsing_function)
{
    cr_assert_eq(my_printf("%?"), 1);
}

Test(stwa, only_separator)
{
    my_str_to_word_array("                        ", "\t:- \0\n");
}

Test(stwa, no_separator)
{
    my_str_to_word_array("hello", " ");
}

Test(putnbr_u, normal_putnbr_u)
{
    my_putnbr_u(244);
}

Test(putnbr_base_x, normal_putnbr_x)
{
    my_putnbr_base_x(244);
}

Test(putnbr_maj, normal_putnbr_maj)
{
    my_putnbr_base_xmaj(244);
}

Test(putnbr_base_o, normal_putnbr_o)
{
    my_putnbr_base_o(244);
}

Test(my_getnbr, letter)
{
    cr_assert_eq(my_getnbr("-+-445b552"), 445);
}

Test(my_getnbr, other_char)
{
    cr_assert_eq(my_getnbr("-+-44{2"), 44);
}

Test(is_a_digits, max_digits)
{
    cr_assert_eq(is_a_digits('9'), true);
}

Test(is_a_digits, min_digits)
{
    cr_assert_eq(is_a_digits('0'), true);
}

Test(is_a_digits, mid_digits)
{
    cr_assert_eq(is_a_digits('='), false);
}

Test(is_a_digits, not_a_digits)
{
    cr_assert_eq(is_a_digits('a'), false);
}
