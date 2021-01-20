#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"
#include "ft_printf.h"

int main()
{
	ft_printf("ultimate2 %*d %*s %*x %*X %*i %*u\n", 1, 5000, 1, "hey", 10, 54700, 1, 300, 10000, -55, 1, -60);
	//ft_printf("ultimate2 %*d %*s %*x %*X %*i %*u\n", 1, 5000, 1, "hey", 10, 54700, 1, 300, 10000, -55, 1, -60);
	//ft_printf("%.s\n", NULL);
}
