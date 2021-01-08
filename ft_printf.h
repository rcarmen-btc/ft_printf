#ifndef MAIN_H
# define MAIN_H
#include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

typedef enum 		e_flags
{
	none = 0b00000000,
	zero,
	minus,
	space,
	sharp
}					t_flags;

typedef struct		s_specs
{
	char			*specifier_types;
	t_flags			flag;
	int				width;
	int				precision;
	char			type;
	va_list			f_varg;
	const char 		*f_str;
	char 			*point;
	unsigned int 	lenth;
} 					t_specs;

int 	ft_printf(const char *s, ...);
int		print_specifier(t_specs *stuff);
int		specifier_parser(t_specs *stuff);
int 	get_specifier_arr(t_specs *stuff, char *specifier);

#endif