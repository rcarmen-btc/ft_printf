#include "ft_printf.h"
#include "libft.h"

void		with_precision(t_specs *stuff, char *str)
{

}

void		dig_int_print(t_specs *stuff)
{
	int		digit_len;
	char	*digit_str;

	//if (!(str = (char *)malloc(sizeof(char))))
	//	return (NULL);
	digit_str = ft_itoa(va_arg(stuff->f_varg, int));
	digit_len = ft_strlen(digit_str);	
	if (stuff->flag == zero && stuff->flag != minus && stuff->point == NULL)	
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