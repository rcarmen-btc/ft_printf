#include "ft_printf.h"
#include "libft.h"

void		with_precision(t_specs *stuff, char *str)
{

}

void		dig_int_print(t_specs *stuff)
{
	int digit_len;
	char *digit_str;
	int i;
	//if (!(str = (char *)malloc(sizeof(char))))
	//	return (NULL);
	i = 0;
	digit_str = ft_itoa(va_arg(stuff->f_varg, int));
	digit_len = ft_strlen(digit_str);
	if (stuff->width > digit_len)
		while (i < stuff->width - digit_len)
		{
			ft_putchar_fd('0', 1);
			i++;
		}


	to = digit_len
	if (stuff->flag == zero && stuff->point == NULL)
	{
		while ()
		{
			/* code */
		}
				
	}
	 
	if (stuff->point != NULL)
		with_precision(stuff, str);
	if (stuff->flag == minus)
	{

	}
	else if (stuff->flag == zero)
	{

	}
	else
	{

	}

}