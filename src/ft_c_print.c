/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_c_print.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarmen <rcarmen@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 15:48:53 by rcarmen           #+#    #+#             */
/*   Updated: 2021/01/24 10:42:04 by rcarmen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

static void			set_lenth_put_char(t_specs *stuff, const char c, int fd)
{
	ft_putchar_fd(c, fd);
	stuff->full_lenth++;
}

void				ft_c_print(t_specs *stuff)
{
	int				c;

	c = va_arg(stuff->f_varg, int);
	if (stuff->flag == none || (stuff->flag == zero &&
		stuff->flag != (zero | minus)))
		while (stuff->width-- > 1)
			set_lenth_put_char(stuff, ' ', 1);
	set_lenth_put_char(stuff, c, 1);
	if (stuff->flag == minus || stuff->flag == (minus | zero))
		while (stuff->width-- > 1)
			set_lenth_put_char(stuff, ' ', 1);
}
