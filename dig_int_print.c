#include "ft_printf.h"
#include "libft.h"

void		flag_handle(t_specs *stuff, int difference, char *str_dig_int, int len_dig_int)
{
	int i;

	i = 0;
	if (stuff->flag == minus)
	{
		if (*str_dig_int == '-')
		{
			ft_putchar_fd(*str_dig_int++, 1);
			stuff->width--;
		}
		while (i++ < difference)
			ft_putchar_fd('0', 1);
		ft_putstr_fd(str_dig_int, 1);
		if (stuff->width > len_dig_int)
			while (--stuff->width > (len_dig_int - 1) + difference)
				ft_putchar_fd(' ', 1);
	}
	else
	{

	}
	
}

void		dig_int_print(t_specs *stuff)
{
	int		len_dig_int;
	int		zero_or_space_len;
	int		difference;
	char	*str_dig_int;

	str_dig_int = ft_itoa(va_arg(stuff->f_varg, int));
	len_dig_int = ft_strlen(str_dig_int);
	if (*str_dig_int == '-')
		len_dig_int -= 1;
	difference = stuff->precision - len_dig_int;
	flag_handle(stuff, difference, str_dig_int, len_dig_int);
}