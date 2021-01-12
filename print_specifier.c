/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_specifier.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarmen <rcarmen@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 16:32:04 by rcarmen           #+#    #+#             */
/*   Updated: 2021/01/13 01:32:51 by rcarmen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int			print_specifier(t_specs *stuff)
{
	//printf("-----------------\n");
	//printf("flag: %d\n", stuff->flag);
	//printf("width: %d\n", stuff->width);
	//printf("point: %d\n", stuff->point != none);
	//printf("precision: %d\n", stuff->precision);
	//printf("type: %d\n", stuff->type);
	if (stuff->type == digit || stuff->type == integer)
		di_print(stuff);
		//dig_int_print(stuff);
	else if (stuff->type == character)
		char_print(stuff);
	else if (stuff->type == string)
		str_print(stuff);
	else if (stuff->type == hex)
		hex_print(stuff);
	else if (stuff->type == upper_hex)
		upper_hex_print(stuff);
	return (0);
}