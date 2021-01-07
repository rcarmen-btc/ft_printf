#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"
#include "ft_printf.h"

int main()
{
	ft_printf("1: 4343%-322.32c");
	ft_printf("\n");
	ft_printf("2: 4343%322.32d");
	ft_printf("\n");
	ft_printf("3: 4343%.32d");
	ft_printf("\n");
	ft_printf("4: 4343%322d");
	ft_printf("\n");
	ft_printf("5: 4343%d");
	ft_printf("\n");
	ft_printf("6: 4343%03d");
	ft_printf("\n");
	ft_printf("7: 4343%-3d");
	ft_printf("\n");
	ft_printf("8: 4343%03%dodddf");
	ft_printf("\n");
	ft_printf("8: 4343%03d");
	ft_printf("\n");
	ft_printf("\n");
	return (0);
}