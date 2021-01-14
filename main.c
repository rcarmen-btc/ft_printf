#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"
#include "./includes/ft_printf.h"

//int main()
//{
//	char *tst = "%-0*.*i";
//	int w = 0;
//	int p = 5;
//	int c = 433;
//	//ft_printf("this %i number", 17);
//	ft_printf("=%i\n", ft_printf (tst, w, p, c));
//    printf("=%i\n",    printf (tst, w, p, c));
//	return (0);
//}
int main()
{
    printf("0:%-34.*d\n", 1, -33);
    printf("1:%-34.*d\n", 1, -33);
    ft_printf("2:%-34.*d\n", 1, -33);
    printf("3:%-34.*d\n", 1, -33);
}
