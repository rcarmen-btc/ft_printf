#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"
#include "ft_printf.h"

char 	*check_the_poit(t_specs *stuff)
{
	return (ft_strchr(stuff->f_str, '.'));
}

int		is_specifier_type(t_specs *stuff)
{
	int			i;

	i = 0;
	while (stuff->specifier_types[i] != '%')
	{
		if (*(stuff->f_str) == stuff->specifier_types[i])
			return (1);
		i++;		
	}

	if (*(stuff->f_str) == '%')
	{
		stuff->f_str++;
		return (-1);
	}
	return (0);
}


int		specifier_parser(t_specs *stuff)
{	
	int is_sp_ty_return;

	while (*(stuff->f_str) && (is_sp_ty_return = is_specifier_type(stuff)))
	{

		stuff->f_str++;
	}
	//printf("%s\n", stuff->f_str);
	else if (*(stuff->f_str + 1) == '%')
	{
		ft_putchar_fd('%', 1);
		stuff->f_str++;
		return (1);
	}
	stuff->f_str++;

	check_the_poit(stuff->f_str);

	is_sp_ty_return = 0;
	if (is_sp_ty_return == 0)
		ft_putstr_fd("{***Error!***}", 1);
	else
	{
		stuff->type = *(stuff->f_str);
		printf("%c\n", stuff->type);
		return (0);
	}
	return (0);
}