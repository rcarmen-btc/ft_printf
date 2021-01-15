/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07_main_test_prc.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarmen <rcarmen@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/19 22:11:54 by epuclla           #+#    #+#             */
/*   Updated: 2021/01/14 20:13:13 by rcarmen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int main()
{
	system("clear");

	printf("\n----------------------------  Testing ft_printf [ Percentage ]  ----------------------------- \n\n");

	ft_printf("%5%\n");
	printf("%5%\n\n");

	ft_printf("%-5%\n");
	printf("%-5%\n\n");

	ft_printf("%05%\n");
	printf("%05%\n\n");

	ft_printf("%-05%\n");
	ft_printf("%-05%\n\n");

}

