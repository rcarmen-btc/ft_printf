NAME = libftprintf.a

CC = gcc

FLAGS = -Wall -Wextra -Werror -c

SRC_FILE = ./src/

OBJ_FILE = ./

INCLUDE = ./ft_printf.h

#SRC = ./src/*.c ./libft/*.c

#OBJ = ./*.o


SRC = $(SRC_FILE)ft_printf.c \
	$(SRC_FILE)ft_specifier_parser.c \
	$(SRC_FILE)ft_di_print.c \
	$(SRC_FILE)ft_x_print.c \
	$(SRC_FILE)ft_upper_x_print.c \
	$(SRC_FILE)ft_print_specifier.c \
	$(SRC_FILE)ft_s_print.c \
	$(SRC_FILE)ft_c_print.c \
	$(SRC_FILE)ft_ptf_putnbr_fd.c \


OBJ = $(OBJ_FILE)ft_printf.o \
	$(OBJ_FILE)ft_specifier_parser.o \
	$(OBJ_FILE)ft_di_print.o \
	$(OBJ_FILE)ft_x_print.o \
	$(OBJ_FILE)ft_upper_x_print.o \
	$(OBJ_FILE)ft_print_specifier.o \
	$(OBJ_FILE)ft_s_print.o \
	$(OBJ_FILE)ft_c_print.o \
	$(OBJ_FILE)ft_ptf_putnbr_fd.o \

all: $(NAME)

$(NAME): $(SRC) $(INCLUDE)
	$(MAKE) -C ./libft re
	mv ./libft/libft.a .
	mv libft.a libftprintf.a
	$(CC) -g3 $(FLAGS) $(SRC)
	ar rcs $(NAME) $(OBJ)

clean:
	$(MAKE) -C ./libft clean
	rm -f $(OBJ)


fclean:	clean
	rm -f $(NAME)

re: fclean all