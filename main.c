#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"
#include "ft_printf.h"

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
    //ft_printf("%3s", "d");
    //printf("1:%3s\n", "HelloWorld");
    //char *c = NULL;
    //write(1, c, 1);
    //ft_printf("Hello |%p|\n", p);
	//    ft_printf("%p\n", NULL);
	unsigned long a = 232;
	char *b = ft_itoa_base(a, 16, 0);
	ft_printf("%-20.*p\n", -1,b);
	printf("%-20.*p\n", -1,b);
	//printf("Hello |%-4.3x|\n", 32);
    //	ft_itoa_base(-19, 3);
    //ft_printf("%s\n", ft_itoa_base(-23, 10));
    //printf("%d\n", i);
    //ft_printf("|%s|", "Hello");
    //printf("%s\n", NULL);
}
