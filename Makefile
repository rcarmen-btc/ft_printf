NAME = libftprintf.a

CC = gcc

FLAGS = -Wall -Wextra -Werror -c

SRC_FILE = ./src/

OBJ_FILE = ./

INCLUDE = ./includes/ft_printf.h

SRC = $(SRC_FILE)ft_printf.c\
	$(SRC_FILE)ft_specifier_parser.c\
	$(SRC_FILE)ft_di_print.c\
	$(SRC_FILE)ft_x_print.c\
	$(SRC_FILE)ft_upper_x_print.c\
	$(SRC_FILE)ft_print_specifier.c\
	$(SRC_FILE)ft_s_print.c\
	$(SRC_FILE)ft_c_print.c\
	$(SRC_FILE)ft_ptf_putnbr_fd.c\
	$(SRC_FILE)ft_point_detector.c\
	$(SRC_FILE)ft_u_print.c\
	$(SRC_FILE)ft_perc_print.c\
	$(SRC_FILE)ft_u_ptf_putnbr_fd.c\

OBJ = $(OBJ_FILE)ft_printf.o\
	$(OBJ_FILE)ft_specifier_parser.o\
	$(OBJ_FILE)ft_di_print.o\
	$(OBJ_FILE)ft_x_print.o\
	$(OBJ_FILE)ft_upper_x_print.o\
	$(OBJ_FILE)ft_print_specifier.o\
	$(OBJ_FILE)ft_s_print.o\
	$(OBJ_FILE)ft_c_print.o\
	$(OBJ_FILE)ft_ptf_putnbr_fd.o\
	$(OBJ_FILE)ft_point_detector.o\
	$(OBJ_FILE)ft_u_print.o\
	$(OBJ_FILE)ft_perc_print.o\
	$(OBJ_FILE)ft_u_ptf_putnbr_fd.o\

all: $(NAME)

$(NAME): $(SRC) $(INCLUDE)
	$(MAKE) -C ./libft re
	mv ./libft/libft.a .
	mv libft.a libftprintf.a
	$(CC) $(FLAGS) $(SRC)
	ar rcs $(NAME) $(OBJ)

clean:
	$(MAKE) -C ./libft clean
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re: fclean all

.PHONY:		all clean fclean re
