/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_di_print.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarmen <rcarmen@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 15:48:53 by rcarmen           #+#    #+#             */
/*   Updated: 2021/01/16 21:02:32 by rcarmen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

static void			set_lenth_put_char(t_specs *stuff, const char c, int fd)
{
	ft_putchar_fd(c, fd);
	stuff->full_lenth++;
}

static int			get_nbr_len(int n)
{
	int				nbr_cnt;

	if (n == 0)
		return (1);
	nbr_cnt = 0;
	while (n != 0)
	{
		nbr_cnt++;
		n /= 10;
	}
	return (nbr_cnt);
}

static void			ot_fl_influ(t_specs *stuff, int n, int nl, int d)
{
	int				i;
	char			z_n;

	i = 0;
	z_n = stuff->flag == zero ? '0' : ' ';
	z_n = stuff->point != NULL ? ' ' : z_n;
	if (stuff->precision < 0 && stuff->flag == zero)
		z_n = '0';
	if (stuff->flag == zero && stuff->point == NULL && n < 0)
		set_lenth_put_char(stuff, '-', 1);
	if (n < 0)
		while (--stuff->width > nl + d)
			set_lenth_put_char(stuff, z_n, 1);
	else
		while (stuff->width-- > nl + d)
			set_lenth_put_char(stuff, z_n, 1);
	if ((stuff->flag == none || stuff->point != NULL) && n < 0)
		set_lenth_put_char(stuff, '-', 1);
	while (i++ < d)
		set_lenth_put_char(stuff, '0', 1);
	if (stuff->precision < 0 && n == 0)
		ft_ptf_putnbr_fd(0, 1);
	else if (n != 0 || stuff->point == NULL)
		ft_ptf_putnbr_fd(n, 1);
}

static void			mi_fl_influ(t_specs *stuff, int nbr, int nl, int d)
{
	int				i;

	i = 0;
	if (stuff->flag == minus || stuff->flag == (minus | zero))
	{
		if (nbr < 0)
			set_lenth_put_char(stuff, '-', 1);
		while (i++ < d)
			set_lenth_put_char(stuff, '0', 1);
		if (nbr != 0 || stuff->point == NULL)
			ft_ptf_putnbr_fd(nbr, 1);
		if (nbr < 0)
			while (--stuff->width > nl + d)
				set_lenth_put_char(stuff, ' ', 1);
		else
			while (stuff->width-- > nl + d)
				set_lenth_put_char(stuff, ' ', 1);
	}
	else
		ot_fl_influ(stuff, nbr, nl, d);
}

void				ft_di_print(t_specs *stuff)
{
	int			nbr_len;
	int			nbr;
	int			diff;

	nbr = va_arg(stuff->f_varg, int);
	nbr_len = get_nbr_len(nbr);
	if (stuff->point != NULL && nbr == 0)
		nbr_len--;
	if (stuff->precision < 0)
		diff = 0;
	else
		diff = stuff->precision - nbr_len;
	diff = diff > 0 ? diff : 0;
	stuff->full_lenth += nbr_len;
	mi_fl_influ(stuff, nbr, nbr_len, diff);
}
