/*
** EPITECH PROJECT, 2023
** my.h
** File description:
** my.h
*/
#include <stdarg.h>
#include <stdbool.h>
#include <dirent.h>
#ifndef MY_H
    #define MY_H

typedef struct biggest_nb {
    int v;
    int p_y;
    int p_x;
} square_t;

bool is_a_digits(char c);
bool my_strncmp(char *s1, char *s2, int index);
bool is_a_letter(char c);
char *my_strcat(char *s1, char *s2);
char **put_x(char **tab, square_t square);
square_t found_the_square(int **tab, int nb_colonne, square_t square);
square_t looking_for_square(int **tab, int nb_colonne, square_t square);
int my_strlen_tab(char **tab);
void parsing_tab(int **tab, int nb_colonne);
void algo(int **tab, int x, int y);
void show_tab(char **tab);
void show_tab_int(int **tab, int nb_colonne);
void column_of_tab_int(int **tab, int column, int res);
void complete_tab_2(char *tab, int *tab_int);
void complete_tab(char **tab, int **tab_int, int count);
int check_characters(char *str);
int fs_open_file(char const *filepath);
int index_of(char c, char *str, int size);
int get_number_from_first_line(int fd, char *buffer, int read_return);
char **my_str_to_word_array(char *str, char *separator);
void free_to_word_array(char **tab);
int replace_str(char *str, char a, char b, int count);
char *my_strdup(char *str);
void my_putchar(char c);
int my_isneg(int nb);
int my_put_nbr(int nb);
void my_swap(int *a, int *b);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char *str);
void my_sort_int_array(int *tab, int size);
int my_compute_power_rec(int nb, int power);
int my_compute_square_root(int nb);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_revstr(char *str);
char *my_strstr(char *str, char const *to_find);
bool my_strcmp(char *s1, char *s2);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_str_isprintable(char const *str);
int my_showstr(char const *str);
int my_showmem(char const *str, int size);
int conditional_1(int i, const char *str, va_list list);
char *my_strncat(char *dest, char const *src, int nb);
int parsing(int *i, const char *format, va_list list);
int digits(va_list list);
int characters(va_list list);
int modulo(va_list list);
int string(va_list list);
int backslash(va_list list);
int hexamin(va_list list);
int hexamaj(va_list list);
int octale(va_list list);
int ptradd(va_list list);
int floatnbr(va_list list);
int my_putnbr_base_x(unsigned long long nb);
int my_putnbr_base_xmaj(unsigned int nb);
int my_putnbr_base_o(unsigned int nb);
int my_put_float(double nb);
int my_printf(const char *format, ...);
int pointadd(unsigned long long add);
int ls_parsing_2(bool *flags);
int stats_of_arg(int i, char const *file, int count);
int my_ls(char const *filepath);
int my_ls_a(char const *filepath);
void reverse_dir(DIR *fd, char const *filepath, struct dirent *s, int count);
int my_ls_r(char const *filepath);
bool flags_of_str(bool *flags, char *str);
int ls_find_flags(bool *flags, char **av);
void ls_parsing(bool *flags, char *av);
int nb_of_args(char **av);
int ls_files(char **av, int c);
int my_putnbr_u(unsigned int nb);
void free_tab(char **tab);

typedef int(*factors)();
typedef struct type {
    char c;
    factors action;
} lilmy_t;

#endif
