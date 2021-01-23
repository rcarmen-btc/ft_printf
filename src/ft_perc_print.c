/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perc_print.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarmen <rcarmen@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 15:48:53 by rcarmen           #+#    #+#             */
/*   Updated: 2021/01/23 16:13:13 by rcarmen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

static void			set_lenth_put_char(t_specs *stuff, const char c, int fd)
{
	ft_putchar_fd(c, fd);
	stuff->full_lenth++;
}

void				ft_perc_print(t_specs *stuff)
{
	char	perc;
	int		i;
	char	z_s;

	i = 0;
	perc = '%';
	z_s = ' ';
	if (stuff->flag == minus || stuff->flag == (minus | zero))
	{
		set_lenth_put_char(stuff, perc, 1);
		while (i++ < stuff->width - 1)
			set_lenth_put_char(stuff, z_s, 1);
	}
	else
	{
		z_s = stuff->flag == zero ? '0' : ' ';
		while (i++ < stuff->width - 1)
			set_lenth_put_char(stuff, z_s, 1);
		set_lenth_put_char(stuff, perc, 1);
	}
}
