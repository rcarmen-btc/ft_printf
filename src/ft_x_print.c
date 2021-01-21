/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_x_print.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarmen <rcarmen@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 15:48:53 by rcarmen           #+#    #+#             */
/*   Updated: 2021/01/21 11:34:08 by rcarmen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

static void			set_lenth_put_char(t_specs *stuff, const char c, int fd)
{
	ft_putchar_fd(c, fd);
	stuff->full_lenth++;
}

void			low_itoa_hex(t_specs *stuff, unsigned long long n)
{
	if (n > 15)
	{
		low_itoa_hex(stuff, n / 16);
		low_itoa_hex(stuff, n % 16);
	}
	else
	{
		if (n <= 9)
			set_lenth_put_char(stuff, n + '0', 1);
		else
			set_lenth_put_char(stuff, n - 10 + 'a', 1);
	}
}

static void			ot_fl_influ(t_specs *stuff, unsigned long long ns, int nl, int d)
{
	int				i;
	char			z_n;

	i = 0;
	z_n = stuff->flag == zero ? '0' : ' ';
	z_n = stuff->point != NULL ? ' ' : z_n;
	if (stuff->precision < 0 && stuff->flag == zero)
		z_n = '0';
	else
		while (stuff->width-- > nl + d)
			set_lenth_put_char(stuff, z_n, 1);
	while (i++ < d)
		set_lenth_put_char(stuff, '0', 1);
	if (stuff->precision < 0 && ns == 0)
		ft_u_ptf_putnbr_fd(0, 1);
	i = 0;
	if (ns != 0 || stuff->point == NULL)
		low_itoa_hex(stuff, ns);
}

static void		mi_fl_influ(t_specs *stuff, unsigned long long ns, int nl, int d)
{
	int			i;

	i = 0;
	if (stuff->flag == minus || stuff->flag == (minus | zero))
	{
		while (i++ < d)
			set_lenth_put_char(stuff, '0', 1);
		i = 0;
		if (ns != 0 || stuff->point == NULL)
			low_itoa_hex(stuff, ns);
		while (stuff->width-- > nl + d)
			set_lenth_put_char(stuff, ' ', 1);
	}
	else
		ot_fl_influ(stuff, ns, nl, d);
}

void				ft_x_print(t_specs *stuff)
{
	int					nbr_len;
	unsigned long long	nbr;
	unsigned long long	tmp;
	int					diff;

	nbr_len = 0;
	nbr = va_arg(stuff->f_varg, unsigned long);
	tmp = nbr;
	while (tmp > 0)
	{
		tmp /= 16;
		nbr_len++;
	}
	if (nbr == 0 && stuff->point == NULL)
		nbr_len = 1;
//	if (stuff->point != NULL && nbr == 0)
//		nbr_len--;
	if (stuff->precision < 0)
		diff = 0;
	else
		diff = stuff->precision - nbr_len;
	diff = diff > 0 ? diff : 0;
	mi_fl_influ(stuff, nbr, nbr_len, diff);
}
