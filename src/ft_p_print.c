/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p_print.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarmen <rcarmen@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 15:48:53 by rcarmen           #+#    #+#             */
/*   Updated: 2021/01/18 15:28:45 by rcarmen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

static void			set_lenth_put_char(t_specs *stuff, const char c, int fd)
{
	ft_putchar_fd(c, fd);
	stuff->full_lenth++;
}

static void			ot_fl_influ(t_specs *stuff, char *ns, int nl, int d)
{
	int				i;
	char			z_n;

	i = 0;
	z_n = stuff->flag == zero ? '0' : ' ';
	z_n = stuff->point != NULL ? '0' : z_n;
	stuff->width -= 2;
	if (z_n == '0')
		ft_putstr_fd("0x", 1);
	while (stuff->width-- > nl + d)
		set_lenth_put_char(stuff, z_n, 1);
	if (z_n != '0')
		ft_putstr_fd("0x", 1);
	while (i++ < d)
		set_lenth_put_char(stuff, '0', 1);
	if (stuff->precision < 0 && ft_strncmp(ns, "0", nl) == 0)
		ft_u_ptf_putnbr_fd(0, 1);
	i = 0;
	if (ft_strncmp(ns, "0", nl) != 0 || stuff->point == NULL)
		while (i < nl)
		{
			set_lenth_put_char(stuff, *(ns + i), 1);
			i++;
		}
}

static void			mi_fl_influ(t_specs *stuff, char *ns, int nl, int d)
{
	int				i;

	i = 0;
	if (stuff->flag == minus || stuff->flag == (minus | zero))
	{
		ft_putstr_fd("0x", 1);
		stuff->width -= 2;
		while (i++ < d)
			set_lenth_put_char(stuff, '0', 1);
		i = 0;
		while (i < nl)
		{
			set_lenth_put_char(stuff, *(ns + i), 1);
			i++;
		}
		while (stuff->width-- > nl + d)
			set_lenth_put_char(stuff, ' ', 1);
	}
	else
		ot_fl_influ(stuff, ns, nl, d);
}

void				ft_p_print(t_specs *stuff)
{
	int				nbr_len;
	unsigned long	nbr;
	char			*nbr_str;
	int				diff;

	nbr = (unsigned long)va_arg(stuff->f_varg, void *);
	nbr_str = ft_itoa_base(nbr, 16, 0);
	nbr_len = 0;
	stuff->full_lenth = stuff->full_lenth + nbr_len;
	nbr_len += ft_strlen(nbr_str);
	if (stuff->point != NULL && nbr == 0)
		nbr_len--;
	if (stuff->precision < 0)
		diff = 0;
	else
		diff = stuff->precision - nbr_len;
	diff = diff > 0 ? diff : 0;
	mi_fl_influ(stuff, nbr_str, nbr_len, diff);
}
