#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"
#include "ft_printf.h"

char 	*check_the_point(t_specs *stuff)
{
	return (ft_strchr(stuff->f_str, '.'));
}

int		flag_detect(t_specs *stuff)
{
	stuff->flag = none;

	if (*(stuff->f_str) == '-')

}

int		is_specifier_type(t_specs *stuff)
{
	int			i;

	i = 0;
	while (stuff->specifier_types[i] != '%')
	{
		if (*(stuff->f_str) == stuff->specifier_types[i])
		{
			stuff->type = *(stuff->f_str);
			return (0);
		}
		i++;
	}
	if (*(stuff->f_str) == '%')
		return (-1);
	return (1);
}


int		specifier_parser(t_specs *stuff)
{
	int is_sp_type_return;
	char *specifier_res_str;

	stuff->f_str++;
	stuff->specifier_types = "cspdiuxX%";
	stuff->point = check_the_point(stuff);

	specifier_res_str = (char *)malloc(sizeof(char));
	while (*(stuff->f_str) && (is_sp_type_return = is_specifier_type(stuff)))
	{
		if (is_sp_type_return == -1)
			break ;
		flag_detect(stuff);
		stuff->f_str++;
	}
	if (*(stuff->f_str) == '\0')
	{
		ft_putstr_fd("{***Error!***}", 1);
		return (-1);
	}
	else if (*(stuff->f_str) == '%')
	{
		ft_putchar_fd('%', 1);
		stuff->f_str++;
		return (0);
	}
	stuff->type = *(stuff->f_str);
	return (0);
}