/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_di_print.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarmen <rcarmen@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 15:48:53 by rcarmen           #+#    #+#             */
/*   Updated: 2021/01/13 21:14:51 by rcarmen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/include/libft.h"
#include "../ft_printf.h"

static void		set_lenth_put_char(t_specs *stuff, const char c, int fd)
{
	ft_putchar_fd(c, fd);
	stuff->full_lenth++;
}

static int		get_nbr_len(int n)
{
	int nbr_cnt;

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


static void		flag_zero_and_none_influence(t_specs *stuff, int nbr, int nbr_len, int diff)
{
	int 	i;
	char	z_o;

	i = 0;
	z_o = stuff->flag == zero ? '0' : ' ';
	z_o = stuff->point != NULL ? ' ' : z_o;
	if (stuff->flag == zero && stuff->point == NULL && nbr < 0)
		set_lenth_put_char(stuff, '-', 1);
	if (nbr < 0)
		while (--stuff->width > nbr_len + diff)
			set_lenth_put_char(stuff, z_o, 1);
	else
		while (stuff->width-- > nbr_len + diff)
			set_lenth_put_char(stuff, z_o, 1);
	if ((stuff->flag == none || stuff->point != NULL) && nbr < 0)
			set_lenth_put_char(stuff, '-', 1);
	while (i++ < diff)
		set_lenth_put_char(stuff, '0', 1);
	ft_ptf_putnbr_fd(nbr, 1);
}

static void 	flag_minus_influence(t_specs *stuff, int	nbr, int nbr_len, int diff)
{
	int 	i;

	i = 0;
	if (stuff->flag == minus || stuff->flag == (minus | zero))
	{
		if (nbr < 0)
			set_lenth_put_char(stuff, '-', 1);
		while (i++ < diff)
			set_lenth_put_char(stuff, '0', 1);
		ft_ptf_putnbr_fd(nbr, 1);
		if (nbr < 0)
			while (--stuff->width > nbr_len + diff)
				set_lenth_put_char(stuff, ' ', 1);
		else
			while (stuff->width-- > nbr_len + diff)
				set_lenth_put_char(stuff, ' ', 1);
	}
	else
		flag_zero_and_none_influence(stuff, nbr, nbr_len, diff);

}

void			ft_di_print(t_specs *stuff)
{
	int			nbr_len;
	int			nbr;
	int			diff;
	
	nbr = va_arg(stuff->f_varg, int);
	nbr_len = get_nbr_len(nbr);
	diff = stuff->precision - nbr_len;
	if (diff < 0)
		diff = 0;
	stuff->full_lenth += nbr_len;
	flag_minus_influence(stuff, nbr, nbr_len, diff);
}