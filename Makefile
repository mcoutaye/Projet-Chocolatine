##
## EPITECH PROJECT, 2024
## make
## File description:
## file
##

CFLAGS	=	-W -Wall -Wextra -Werror -pedantic -L lib/my/ -lmy

SRC = 	test.C

OBJ = 	$(SRC:.c=.o)

NAME 	= chocolatine

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
	rm -f *.gcno *gcda
	rm unit_tests

tests_run:
	gcc -o unit_tests test.c \
	lib/my/*.c tests/test_functions.c \
	--coverage -lcriterion
	./unit_tests

tests_re: tests_run

re: fclean all