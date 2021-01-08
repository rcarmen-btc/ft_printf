/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_specifier.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarmen <rcarmen@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 16:32:04 by rcarmen           #+#    #+#             */
/*   Updated: 2021/01/08 08:23:34 by rcarmen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int		print_specifier(t_specs *stuff)
{
	printf("-----------------\n");
	printf("flag: %d\n", stuff->flag);
	printf("width: %d\n", stuff->width);
	printf("point: %d\n", stuff->point != none);
	printf("precision: %d\n", stuff->precision);
	printf("type: %c\n", stuff->type);
}