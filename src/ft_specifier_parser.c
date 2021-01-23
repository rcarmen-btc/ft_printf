/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specifier_parser.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarmen <rcarmen@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 16:32:04 by rcarmen           #+#    #+#             */
/*   Updated: 2021/01/18 15:15:22 by rcarmen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

static void			flag_detector(t_specs *stuff)
{
	stuff->flag = none;
	while (*(stuff->f_str) == '-' || *(stuff->f_str) == '0')
	{
		while (*(stuff->f_str) == '-')
		{
			stuff->flag |= minus;
			stuff->f_str++;
		}
		while (*(stuff->f_str) == '0')
		{
			stuff->flag |= zero;
			stuff->f_str++;
		}
	}
}

static void			width_detector(t_specs *stuff)
{
	stuff->width = 0;
	while (ft_isdigit(*(stuff->f_str)))
		stuff->width = (stuff->width * 10) + (*(stuff->f_str++) - '0');
	if (*(stuff->f_str) == '*')
	{
		stuff->width = va_arg(stuff->f_varg, int);
		if (stuff->width < 0)
		{
			stuff->flag |= minus;
			stuff->width *= -1;
		}
		stuff->f_str++;
	}
}

static void			precision_detector(t_specs *stuff)
{
	stuff->f_str++;
	stuff->precision = 0;
	while (ft_isdigit(*(stuff->f_str)))
		stuff->precision = (stuff->precision * 10) + (*(stuff->f_str++) - '0');
	if (*(stuff->f_str) == '*')
	{
		stuff->precision = va_arg(stuff->f_varg, int);
		stuff->f_str++;
	}
}

static int			type_detector(t_specs *stuff)
{
	stuff->type = no_type;
	if (*(stuff->f_str) == 'c')
		stuff->type = character;
	else if (*(stuff->f_str) == 's')
		stuff->type = string;
	else if (*(stuff->f_str) == 'd')
		stuff->type = digit;
	else if (*(stuff->f_str) == 'i')
		stuff->type = integer;
	else if (*(stuff->f_str) == 'u')
		stuff->type = unsig;
	else if (*(stuff->f_str) == 'x')
		stuff->type = hex;
	else if (*(stuff->f_str) == 'p')
		stuff->type = pointer;
	else if (*(stuff->f_str) == 'X')
		stuff->type = upper_hex;
	else if (*(stuff->f_str) == '%')
		stuff->type = percent;
	if (stuff->type != no_type)
	{
		stuff->f_str++;
		return (0);
	}
	return (1);
}

void				ft_specifier_parser(t_specs *stuff)
{
	int				type_detector_return;

	stuff->f_str++;
	stuff->point = ft_point_detector((char *)stuff->f_str);
	stuff->precision = 0;
	stuff->width = 0;
	stuff->flag = none;
	// type_detector_return = type_detector(stuff);
	while (*(stuff->f_str) && (type_detector_return = type_detector(stuff)))
	{
		flag_detector(stuff);
		width_detector(stuff);
		if (stuff->point != NULL)
			precision_detector(stuff);
		if ()
	}
	if (*(stuff->f_str) == '\0' && type_detector_return != 0)
	{
		ft_putstr_fd("{***Error!***}", 1);
		return ;
	}
	ft_print_specifier(stuff);
}
