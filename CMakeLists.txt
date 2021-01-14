cmake_minimum_required(VERSION 3.17)
project(ptf C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(ptf
        src/ft_printf.c
        ft_printf.h
        libft/ft_putchar_fd.c
        libft/ft_putstr_fd.c
        libft/ft_strlen.c
        libft.h
        main.c
        src/ft_specifier_parser.c
        libft/ft_strchr.c
        libft/ft_isdigit.c
        src/ft_print_specifier.c
        src/ft_c_print.c
        src/ft_x_print.c
        src/ft_s_print.c
        src/ft_upper_x_print.c
        src/ft_di_print.c
        src/ft_ptf_putnbr_fd.c
        libft/ft_bzero.c
        libft/ft_memset.c)