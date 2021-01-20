/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perc_print.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarmen <rcarmen@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 15:48:53 by rcarmen           #+#    #+#             */
/*   Updated: 2021/01/19 16:36:16 by rcarmen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void		ft_perc_print(t_specs *stuff)
{
	char	perc;
	int		i;
	char	z_s;

	i = 0;
	perc = '%';
	z_s = ' ';
	if (stuff->flag == minus || stuff->flag == (minus | zero))
	{
		ft_putchar_fd(perc, 1);
		while (i++ < stuff->width - 1)
			ft_putchar_fd(z_s, 1);
	}
	else
	{	
		z_s = stuff->flag == zero ? '0' : ' ';
		while (i++ < stuff->width - 1)
			ft_putchar_fd(z_s, 1);
		ft_putchar_fd(perc, 1);
	}
}
