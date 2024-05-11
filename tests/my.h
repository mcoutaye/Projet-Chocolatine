/*
** EPITECH PROJECT, 2023
** my.h
** File description:
** never gonna give you up
*/

#ifndef MY_H
    #include <stdlib.h>
    #include <stdio.h>
    #include <signal.h>
    #include <stdbool.h>
    #include "lib/my/my.h"
    #include <dirent.h>
    #include <sys/types.h>
    #include <sys/syscall.h>
    #include <unistd.h>
    #include <sys/stat.h>
    #include <elf.h>

    #define MY_H
    #define END_OF_STR '\0'
    #define MINORBITS    20
    #define MINORMASK    ((1U << MINORBITS) - 1)
    #define MAJOR(dev)    ((unsigned int) ((dev) >> MINORBITS))
    #define MINOR(dev)    ((unsigned int) ((dev) & MINORMASK))
    #define ABS(x) (x < 0) ? -x : x
    #define WA "Wrong Architecture.\n"

typedef struct minishell {
    int ac;
    char **env;
    char **save_env;
    char **av;
    char *old_pwd;
} minishell_t;

typedef struct sig_info {
    int pid_enemy;
    int index;
    char res;
} sig_info_t;

typedef struct player_info {
    int player;
    int enemy_pid;
    char **my_map;
    char **his_map;
    char **file;
    int hit_r;
    int hit_send;
    bool turn;
    bool start;
    struct sigaction act;
} info_player_t;

typedef struct binair {
    char c;
    int binair;
} binary_t;

void segv_func(int status);
bool elf_file(char *file);
bool is_a_directory(char *filepath);
bool is_a_good_string(char *str);
char *concat_path(char *path, char *av);
int found_the_path(char **path, minishell_t *shell);
void free_path(char **path, char *all_path);
int cd_perm_denied(minishell_t *shell);
int cd_function(minishell_t *shell);
void free_all(minishell_t *shell);
int bin_function(minishell_t *shell);
int execution(char *path, minishell_t *shell);
char **getpath(minishell_t *shell);
int existing_value(char *str, minishell_t *shell);
void unset_value(minishell_t *shell, int index);
int unsetenv_function(minishell_t *shell);
void create_value(minishell_t *shell);
int env_function(minishell_t *shell);
int setenv_function(minishell_t *shell);
int build_in_function(minishell_t *shell);
char **init_env(char **env);
minishell_t *init_shell(int ac, char **av, char **env);
void check_args(char *arg);
void error_usage(minishell_t *shell);
int mini_shell(int ac, char **av, char **env);
extern int pid_enemy;
int singleton(int signum, int reset);
char *manage_attack(void);
void game_loop(info_player_t *info);
int connection(int ac, char **av, info_player_t *info);
int help(void);
void generate_map(info_player_t *info);
char **boats_position(char **map, char **tab);
char **which_direction(char **map, char *position);
int init(int ac, char **av, info_player_t *info);
char **read_file(char *file);
info_player_t *setplayer(void);
bool check_boats_positions(char **tab);
void show_boats(int player, char **map);
void display_boats(char **my_map, char **his_map);
#endif
