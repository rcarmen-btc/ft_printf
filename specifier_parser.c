#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"
#include "ft_printf.h"

char 	*point_detector(t_specs *stuff)
{
	return (ft_strchr(stuff->f_str, '.'));
}

void	flag_detector(t_specs *stuff)
{
	stuff->flag = none;

	if (*(stuff->f_str) == '-')
	{
		stuff->flag |=  minus;
		stuff->f_str++;
	}
	else if (*(stuff->f_str) == '0')
	{
		stuff->flag |= zero;
		stuff->f_str++;
	}
}

void	width_detector(t_specs *stuff)
{
	if (stuff->point != NULL)
	{
		while (*(stuff->f_str) != '.')
		{
			if (*(stuff->f_str) == '*')
			{
				stuff->stars_status |= first_star;
				stuff->width = va_arg(stuff->f_varg, int);
				stuff->f_str++;
			} else
				stuff->width = (stuff->width * 10) + (*(stuff->f_str++) - '0');
		}
		stuff->f_str++;
	}
	else
	{
		while (ft_isdigit(*(stuff->f_str)))
			stuff->width = (stuff->width * 10) + (*(stuff->f_str++) - '0');
		if (*(stuff->f_str) == '*')
		{
			stuff->stars_status |= first_star;
			stuff->width = va_arg(stuff->f_varg, int);
			stuff->f_str++;
		}
	}
}

void		precision_detector(t_specs *stuff)
{
	int res;

	res = 0;
	while (ft_isdigit(*(stuff->f_str)))
			stuff->precision = (stuff->precision * 10) + (*(stuff->f_str++) - '0');
	if (*(stuff->f_str) == '*')
	{
		stuff->stars_status |= second_star;
		stuff->precision2 = va_arg(stuff->f_varg, int);
		stuff->f_str++;
	}
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

	stuff->f_str++;
	stuff->specifier_types = "cspdiuxX%";
	stuff->stars_status = no_stars;
	stuff->point = point_detector(stuff);

	while (*(stuff->f_str) && (is_sp_type_return = is_specifier_type(stuff)))
	{
		if (is_sp_type_return == -1)
			break ;
		flag_detector(stuff);
		width_detector(stuff);
		if (stuff->point != NULL)
			precision_detector(stuff);
		else
			stuff->precision = 0;
	}
	if (*(stuff->f_str) == '\0')
		ft_putstr_fd("{***Error!***}", 1);
	else if (*(stuff->f_str) == '%')
	{
		ft_putchar_fd('%', 1);
		stuff->f_str++;
	}
	ft_printf("\n");
	printf("flag: %d\n", stuff->flag);
	printf("width: %d\n", stuff->width);
	printf("point: %d\n", stuff->point != none);
	printf("precision: %d\n", stuff->precision);
	printf("type: %c\n", stuff->type);
	printf("stars: %d\n", stuff->stars_status);
	return (0);
}