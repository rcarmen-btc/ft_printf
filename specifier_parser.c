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
	stuff->width = 0;
	while (ft_isdigit(*(stuff->f_str)))
		stuff->width = (stuff->width * 10) + (*(stuff->f_str++) - '0');
	if (*(stuff->f_str) == '*')
	{
		stuff->width = va_arg(stuff->f_varg, int);
		stuff->f_str++;
	}
}

void		precision_detector(t_specs *stuff)
{
	stuff->precision = 0;
	stuff->f_str++;
	while (ft_isdigit(*(stuff->f_str)))
		stuff->precision = (stuff->precision * 10) + (*(stuff->f_str++) - '0');
	if (*(stuff->f_str) == '*')
	{
		stuff->precision = va_arg(stuff->f_varg, int);
		stuff->f_str++;
	}
}
int		type_detector(t_specs *stuff)
{
	int			i;

	i = 0;
	while (stuff->specifier_types[i] != '%')
	{
		if (*(stuff->f_str) == stuff->specifier_types[i])
		{
			stuff->type = *(stuff->f_str);
			stuff->f_str++;
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
	int type_detector_return;

	stuff->f_str++;
	stuff->specifier_types = "cspdiuxX%";
	stuff->point = point_detector(stuff);
	while (*(stuff->f_str) && (type_detector_return = type_detector(stuff)))
	{
		if (type_detector_return == -1)
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
	else if (type_detector_return == -1)
	{
		ft_putchar_fd('%', 1);
		stuff->f_str++;
	}
	print_specifier(stuff);
	return (0);
}
