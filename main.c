#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include "libft.h"
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
    //ft_printf("%3s", "d");
    //printf("1:%3s\n", "HelloWorld");
    //char *c = NULL;
    //write(1, c, 1);
    //ft_printf("1:Hello |%.3s|\n", NULL);
    int i = printf("%.-2u", 23);
    //printf("%d\n", i);
    //ft_printf("|%s|", "Hello");
    //printf("%s\n", NULL);
}
