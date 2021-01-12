NAME = libftprintf.a

CC = gcc

FLAGS = -Wall -Wextra -Werror

SRC_FILE = ./

OBJ_FILE = ./

INCLUDE = ./include/ft_printf.h

SRC = $(SRC_FILE)ft_printf.c \
	$(SRC_FILE)specifier_parser.c \
	$(SRC_FILE)di_print.c \
	$(SRC_FILE)x_print.c \
	$(SRC_FILE)upper_x_print.c \
	$(SRC_FILE)print_specifier.c \
	$(SRC_FILE)s_print.c\


OBJ = $(OBJ_FILE)ft_printf.c \
	$(OBJ_FILE)specifier_parser.c \
	$(OBJ_FILE)di_print.c \
	$(OBJ_FILE)x_print.c \
	$(OBJ_FILE)upper_x_print.c \
	$(OBJ_FILE)print_specifier.c \
	$(OBJ_FILE)s_print.c\

all: $(NAME)

$(NAME): $(SRC)
	$(MAKE) -C ./libft
	mv ./libft/libft.a .
	mv libft.a libftprintf.a
	$(CC) $(FLAGS) -c $(SRC)
	ar rcs $(NAME) $(OBJ) $(LIBFT_OBJ)

#main: $(NAME)
#	gcc ./src/main.c -c
#	gcc ./main.o ./libftprintf.a

clean:
	rm 
fclean:

re:

bonus:
