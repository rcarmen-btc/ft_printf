/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_specifier.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarmen <rcarmen@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 16:32:04 by rcarmen           #+#    #+#             */
/*   Updated: 2021/01/17 19:08:21 by rcarmen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_print_specifier(t_specs *stuff)
{
	if (stuff->type == digit || stuff->type == integer)
		ft_di_print(stuff);
	else if (stuff->type == character)
		ft_c_print(stuff);
	else if (stuff->type == string)
		ft_s_print(stuff);
	else if (stuff->type == hex)
		ft_x_print(stuff);
	else if (stuff->type == upper_hex)
		ft_upper_x_print(stuff);
	else if (stuff->type == unsig)
		ft_u_print(stuff);
	else if (stuff->type == pointer)
		ft_p_print(stuff);
	else if (stuff->type == percent)
		ft_perc_print(stuff);
	return (0);
}
