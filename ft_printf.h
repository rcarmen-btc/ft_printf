/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarmen <rcarmen@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 15:48:53 by rcarmen           #+#    #+#             */
/*   Updated: 2021/01/23 16:03:23 by rcarmen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

# ifndef IS_LINUX
#  define IS_LINUX 0
# endif

# ifndef NULL_SIZE
#  define NULL_SIZE 6
# endif

typedef enum	e_type_mods
{
	no_type = 0b00000000,
	character = 0b00000001,
	string = 0b00000010,
	digit = 0b00000100,
	integer = 0b00001000,
	unsig = 0b00010000,
	hex = 0b00100000,
	upper_hex = 0b01000000,
	percent = 0b00000011,
	pointer = 0b00000111
}				t_type_mods;

typedef enum	e_flags
{
	none = 0b00000000,
	zero = 0b00000001,
	minus = 0b00000010,
	space = 0b00000100,
	sharp = 0b00001000
}				t_flags;

typedef struct		s_specs
{
	t_flags			flag;
	int				width;
	int				precision;
	char			type;
	va_list			f_varg;
	const char		*f_str;
	char			*point;
	unsigned int	full_lenth;
}					t_specs;

int					ft_printf(const char *s, ...);
void				ft_perc_print(t_specs *stuff);
void				ft_u_ptf_putnbr_fd(unsigned int n, int fd);
void				ft_ptf_putnbr_fd(int n, int fd);
void				ft_di_print(t_specs *buff);
int					ft_print_specifier(t_specs *stuff);
void				ft_specifier_parser(t_specs *stuff);
void				ft_c_print(t_specs *stuff);
void				ft_s_print(t_specs *stuff);
int					ft_valid(char c);
void				ft_x_print(t_specs *stuff);
void				ft_u_print(t_specs *stuff);
void				ft_p_print(t_specs *stuff);
void				ft_upper_x_print(t_specs *stuff);
char				*ft_point_detector(char *s);

#endif
