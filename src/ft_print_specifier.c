/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_specifier.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarmen <rcarmen@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 16:32:04 by rcarmen           #+#    #+#             */
/*   Updated: 2021/01/13 14:12:28 by rcarmen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/include/libft.h"
#include "../ft_printf.h"

int			ft_print_specifier(t_specs *stuff)
{
	//printf("-----------------\n");
	//printf("flag: %d\n", stuff->flag);
	//printf("width: %d\n", stuff->width);
	//printf("point: %d\n", stuff->point != none);
	//printf("precision: %d\n", stuff->precision);
	//printf("type: %d\n", stuff->type);
	if (stuff->type == digit || stuff->type == integer)
		ft_di_print(stuff);
		//dig_int_print(stuff);
	else if (stuff->type == character)
		ft_c_print(stuff);
	else if (stuff->type == string)
		ft_s_print(stuff);
	else if (stuff->type == hex)
		ft_x_print(stuff);
	else if (stuff->type == upper_hex)
		ft_upper_x_print(stuff);
	return (0);
}