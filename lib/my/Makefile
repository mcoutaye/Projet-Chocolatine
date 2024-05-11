##
## EPITECH PROJECT, 2023
## makefile
## File description:
## makefile
##

CC	=	gcc

CFLAGS	=	-W -Wall -Werror -Wextra

SRC	=	my_putchar.c	\
		my_str_to_word_array.c	\
		my_put_nbr.c	\
		my_putstr.c	\
		my_getnbr.c\
		my_strlen.c	\
		my_put_float.c	\
		my_putnbr_base_o.c	\
		my_putnbr_base_x.c	\
		my_printf.c	\
		my_putnbr_basexmaj.c	\
		fonction_miniprintf.c	\
		fonction_ouxx.c	\
		parsing.c 	\
		pflag.c\
		my_strcmp.c\
		my_strlen_tab.c\
		my_strdup.c\
		show_tab.c\
		my_strcat.c\
		isaletter.c\
		my_strncmp.c\
		my_putnbr_u.c\
		free_tab.c\
		is_a_digits.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc  $(NAME) $(OBJ)
	cp $(NAME) ../../

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f ../../$(NAME)

re:	fclean all
