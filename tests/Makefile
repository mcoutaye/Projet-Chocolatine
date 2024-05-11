##
## EPITECH PROJECT, 2023
## makefile
## File description:
## makefile
##

CFLAGS	=	-W -Wall -Wextra -Werror -pedantic -L lib/my/ -lmy

SRC	=	main.c init.c build_in.c unsetenv_cd.c bin_function.c cd_function.c\
		error_argument.c

OBJ	=	$(SRC:.c=.o)

NAME	=	mysh

all: $(NAME)

$(NAME): $(OBJ)
	make -C lib/my
	gcc -o $(NAME) $(OBJ) $(CFLAGS)
clean:
	make clean -C lib/my
	rm -f $(OBJ)

fclean: clean
	make fclean -C lib/my
	rm -f $(NAME)

tests_run:
	gcc -o unit_tests bin_function.c cd_function.c build_in.c init.c \
		unsetenv_cd.c error_argument.c\
		lib/my/*.c tests/test_functions.c \
		tests/tests_minishells.c --coverage -lcriterion
	./unit_tests

tests_clean:
	rm -f *.gcno *.gcda
	rm unit_tests

tests_re: tests_clean tests_run

debug:
	gcc -o $(NAME) $(SRC) $(CFLAGS) -ggdb -g3

re:	fclean all
