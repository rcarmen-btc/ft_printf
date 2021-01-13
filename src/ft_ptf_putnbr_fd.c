/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptf_putnbr_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarmen <rcarmen@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 16:24:01 by rcarmen           #+#    #+#             */
/*   Updated: 2021/01/13 20:58:44 by rcarmen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void				ft_ptf_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("2147483648", fd);
	else if (n < 0)
		ft_putnbr_fd(-n, fd);
	else if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}
