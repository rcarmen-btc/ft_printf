#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"
#include "ft_printf.h"

int main()
{
	char *tst = "%-0*.*i";
	int w = 0;
	int p = 5;
	int c = 433;
	//ft_printf("this %i number", 17);
	ft_printf("=%i\n", ft_printf (tst, w, p, c));
    printf("=%i\n",    printf (tst, w, p, c));
	return (0);
}
//int main()
//{
//	printf("1: %-6.4d\n", -21);
//	ft_printf("2: %-6.4d\n", -21);
//	printf("3: %-6.4d\n", -21);
//}
