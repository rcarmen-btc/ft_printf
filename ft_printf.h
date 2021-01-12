#ifndef FT_PRINTF_H
# define FT_PRINTF_H
#include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

typedef enum		e_type_mods
{
	no_type = 0b00000000,
	character = 0b00000001,
	string = 0b00000010,
	digit = 0b00000100,
	integer = 0b00001000,
	unsig = 0b00010000,
	hex = 0b00100000,
	upper_hex = 0b01000000
}					t_type_mods;

typedef enum 		e_flags
{
	none = 0b00000000,
	zero = 0b00000001,
	minus = 0b00000010,
	space = 0b00000100,
	sharp = 0b00001000
}					t_flags;

typedef struct		s_specs
{
	t_flags			flag;
	int				width;
	int				precision;
	char			type;
	va_list			f_varg;
	const char 		*f_str;
	char 			*point;
	unsigned int 	full_lenth;
} 					t_specs;

int			ft_printf(const char *s, ...);
//void		dig_int_print(t_specs *stuff);
void		di_print(t_specs *buff);
int			print_specifier(t_specs *stuff);
void		specifier_parser(t_specs *stuff);
void		char_print(t_specs *stuff);
void		str_print(t_specs *stuff);
void		hex_print(t_specs *stuff);
void 		upper_hex_print(t_specs *stuff);

#endif