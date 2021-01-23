/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_surpluses.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarmen <rcarmen@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 15:48:53 by rcarmen           #+#    #+#             */
/*   Updated: 2021/01/23 17:25:33 by rcarmen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void		ft_p_nu_ca(t_specs *stuff, int nl, int diff)
{
	int i;
	char			z_s;

	z_s = (stuff->flag & zero) == 1 ? '0' : ' ';
	i = 0;	
	if (z_s == '0')
		ft_putstr_fd("0x", 1);
	while (stuff->width-- > nl + diff + 2)
		set_lenth_put_char(stuff, z_s, 1);
	i = 0;
	if (z_s == ' ')
		ft_putstr_fd("0x", 1);
	while (i++ < diff)
		set_lenth_put_char(stuff, '0', 1);
	if (stuff->point == NULL || stuff->precision != 0)
		set_lenth_put_char(stuff, '0', 1);
}