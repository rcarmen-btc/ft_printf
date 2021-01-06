#ifndef MAIN_H
# define MAIN_H
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
	char			specifier_types[9];
	t_flags			flags;
	int				width;
	int				precision;
	char			type;
	va_list			f_varg;
	const char 		*f_str;
	int				point;
	unsigned int 	lenth;
} 					t_specs;

int 	ft_printf(const char *s, ...);
int		specifier_parser(t_specs *stuff);
int 	get_specifier_arr(t_specs *stuff, char *specifier);

#endif