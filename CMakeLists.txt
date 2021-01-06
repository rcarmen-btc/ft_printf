cmake_minimum_required(VERSION 3.17)
project(ptf C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(ptf
        ft_printf.c
        ft_printf.h
        ft_putchar_fd.c
        ft_putstr_fd.c
        ft_strlen.c
        libft.h
        main.c
        specifier_parser.c
        ft_strchr.c)
