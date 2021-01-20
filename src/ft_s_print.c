/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s_print.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarmen <rcarmen@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 15:48:53 by rcarmen           #+#    #+#             */
/*   Updated: 2021/01/20 23:41:46 by rcarmen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

static void			set_lenth_put_char(t_specs *stuff, const char c, int fd)
{
	ft_putchar_fd(c, fd);
	stuff->full_lenth++;
}

static void			ptf_putnstr_fd(char *s, int n, int fd)
{
	if (NULL == s)
		return ;
	write(fd, s, n);
}

static void			flag_influence(t_specs *stuff, int pl, int sl, char *s)
{
	if (stuff->flag != minus)
		while (sl--)
			set_lenth_put_char(stuff, ' ', 1);
	if (s != NULL || !IS_LINUX)
	{
//		if (stuff->precision < 0)
//		{
//			stuff->full_lenth += NULL_SIZE;
//			ptf_putnstr_fd("(null)", NULL_SIZE, 1);
//		}
//		else
//		{
		if (stuff->precision == 0 && stuff->point == NULL)
		{
			stuff->full_lenth += pl;
			ptf_putnstr_fd(s, pl, 1);
		}
//		}
	}
	if (stuff->flag == minus)
		while (sl--)
			set_lenth_put_char(stuff, ' ', 1);
}

static void			null_case(t_specs *stuff)
{
	int				spc_len;
	int				prt_len;

	spc_len = stuff->width - NULL_SIZE;
	if (spc_len < 0)
		spc_len = 0;
	if (stuff->point != NULL && stuff->precision < NULL_SIZE &&
		stuff->precision >= 0)
		prt_len = stuff->precision;
	else
		prt_len = NULL_SIZE;
	if (!IS_LINUX && (spc_len = stuff->width - prt_len) < 0)
		spc_len = 0;
	if (IS_LINUX)
	{
		if (stuff->point != NULL &&
			stuff->precision >= 0 && stuff->precision < 6)
			flag_influence(stuff, 0, stuff->width, NULL);
		else if (stuff->point == NULL || stuff->precision < 0)
			flag_influence(stuff, NULL_SIZE, spc_len, "(null)");
		else if (stuff->precision >= 6)
			flag_influence(stuff, NULL_SIZE, spc_len, "(null)");
	}
	else
		flag_influence(stuff, prt_len, spc_len, "(null)");
}

void				ft_s_print(t_specs *stuff)
{
	char			*str;
	int				str_len;
	int				prt_len;
	int				spc_len;

	str = va_arg(stuff->f_varg, char *);
	if (str == NULL)
	{
		null_case(stuff);
		return ;
	}
	str_len = ft_strlen(str);
	if (stuff->point != NULL)
	{
		if (stuff->precision < str_len && stuff->precision > 0)
			prt_len = stuff->precision;
		else
			prt_len = str_len;
	}
	else
		prt_len = str_len;
	if ((spc_len = stuff->width - prt_len) < 0)
		spc_len = 0;
	flag_influence(stuff, prt_len, spc_len, str);
}
