# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rcarmen <rcarmen@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/03 16:32:18 by rcarmen           #+#    #+#              #
#    Updated: 2021/01/13 05:25:50 by rcarmen          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Wextra -Werror

INCLUDE = ./include/libft.h

SRC = ft_isalnum.c ft_memcmp.c ft_memmove.c ft_memset.c\
	ft_atoi.c ft_strlcpy.c ft_strchr.c ft_strlcat.c ft_strtrim.c\
	ft_itoa.c ft_memcpy.c ft_strlcpy.c ft_strlen.c ft_putchar_fd.c\
	ft_bzero.c   ft_isascii.c ft_strcpy.c ft_memccpy.c ft_strncmp.c ft_putstr_fd.c\
	ft_strrchr.c ft_isalpha.c ft_isprint.c ft_putendl_fd.c\
	ft_calloc.c  ft_isdigit.c ft_memchr.c  ft_memset.c ft_strjoin.c\
	ft_toupper.c ft_tolower.c ft_strdup.c ft_strnstr.c ft_substr.c\
	ft_putnbr_fd.c ft_strmapi.c ft_split.c ft_lstadd_front.c ft_lstadd_back.c ft_lstsize.c\
	ft_lstdelone.c ft_lstlast.c ft_lstnew.c ft_lstclear.c ft_lstiter.c ft_lstmap.c ft_isspace.c

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME): $(OBJ) $(INCLUDE)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	gcc $(FLAGS) -c $< -o $@
 
so:
	gcc -fPIC -c ${SRC_BONUS}
	gcc -shared -Wl,-soname,libft.so -o libft.so *.o

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY:		all clean fclean re