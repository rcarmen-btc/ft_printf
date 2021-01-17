cmake_minimum_required(VERSION 3.17)
project(ptf C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(ptf
        libft/ft_itoa_base.c
        src/ft_point_detector.c
        src/ft_printf.c
        includes/ft_printf.h
        libft/ft_putchar_fd.c
        libft/ft_putstr_fd.c
        libft/ft_strlen.c
        libft/libft.h
        src/ft_u_print.c
        src/ft_u_ptf_putnbr_fd.c
        src/ft_perc_print.c
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