#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"
#include "ft_printf.h"

int main()
{
	int w = 16;
	int p = 14;

	char c = 65;
	char *s = "hello";
	int *pr = &w;
	int	d = 200;
	int i = d;
	int u = d;
	int x = 23;
	int X = x;
	int len2;
	
	len2 = ft_printf("%.i, %.d, %.d, %.d, %.d, %.d, %.d, %.d", 8, -12, 123456789, 0, -12345678, 97, -2147483648, 2147483647);
	printf("\n%d\n", len2);
	len2 = ft_printf("%*s%198.3u", -62, "32", 45, 2133259791u);
	printf("\n%d\n", len2);
	len2 = ft_printf("%*.*c %*.*s %*.*d %*.*i %*.*u %*.*x %*.*X %*.*%", w, p, c, w, p, s, w, p, d, w, p, i, w, p, u, w, p, x, w, p, X, w, p);
	printf("\n%d\n", len2);
	len2 = ft_printf("%-*.*c %-*.*s %-*.*d %-*.*i %-*.*u %-*.*x %-*.*X %-*.*%", w, p, c, w, p, s, w, p, d, w, p, i, w, p, u, w, p, x, w, p, X, w, p);
	printf("\n%d\n", len2);
	len2 = ft_printf("%*c %*s %*d %*i %*u %*x %*X %*%", w, c, w, s, w, d, w, i, w, u, w, x, w, X, w);
	printf("\n%d\n", len2);
	len2 = ft_printf("%*.*c %*.*s %*.*d %*.*i %*.*u %*.*x %*.*X %*.*%", w, p, c, w, p, s, w, p, d, w, p, i, w, p, u, w, p, x, w, p, X, w, p);
	printf("\n%d\n", len2);
	len2 = ft_printf("%*.*x %*.*X %%", w, p, x, w, p, X, w, p);
	printf("\n%d\n", len2);
	len2 = ft_printf("%*.*c %*.*s %*.*d %*.*i %*.*u %*.*x %*.*X %%", w, p, c, w, p, s, w, p, d, w, p, i, w, p, u, w, p, x, w, p, X, w, p);
	printf("\n%d\n", len2);
	len2 = ft_printf("%*.*c %*.*s %*.*d %*.*i %*.*u %*.*x %*.*X %%", w, p, c, w, p, s, w, p, d, w, p, i, w, p, u, w, p, x, w, p, X, w, p);
	printf("\n%d\n", len2);
	len2 = ft_printf("%*.*c %*.*s  %*.*d %*.*i %*.*u %*.*x %*.*X %*.*%", w, p, c, w, p, s, w, p, d, w, p, i, w, p, u, w, p, x, w, p, X, w, p);
	printf("\n%d\n", len2);
	len2 = ft_printf("%*.*c %*.*s %*.*d %*.*i %*.*u %*.*x %*.*X %*.*%", w, p, c, w, p, s, w, p, d, w, p, i, w, p, u, w, p, x, w, p, X, w, p);
	printf("\n%d\n", len2);
	//len2 = ft_printf("%*.*p", w, p, NULL);
	//len2 = ft_printf("%*.*p", w, p, &w);
	printf("\n%d\n", len2);
}
