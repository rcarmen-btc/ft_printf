#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"
#include "ft_printf.h"

int main() {
//	int w = 5;
//	int p = 0;
//
//	char c = 65;
//	char *s = "hello";
//	int *pr = &w;
//	int	d = 200;
//	int i = d;
//	int u = d;
//	int x = 23;
//	int X = x;
    int len;

    int a = 8;
    int b = 5;
    char c = 'a';
    int d = 2147483647;
    int e = -2147483648;
    int f = 42;
    int g = 25;
    int h = 4200;
    int i = 8;
    int j = -12;
    int k = 123456789;
    int l = 0;
    int m = -12345678;
    char *n = "abcdefghijklmnop";
    char *o = "-a";
    char *p = "-12";
    char *q = "0";
    char *r = "%%";
    char *s = "-2147483648";
    char *t = "0x12345678";
    char *u = "-0";

//	len2 = ft_printf("%.i, %.d, %.d, %.d, %.d, %.d, %.d, %.d", 8, -12, 123456789, 0, -12345678, 97, -2147483648, 2147483647);
//	printf("\n%d\n", len2);
//	len2 = ft_printf("%*s%198.3u", -62, "32", 45, 2133259791u);
//	printf("\n%d\n", len2);
//	len2 = ft_printf("%*.*c %*.*s %*.*d %*.*i %*.*u %*.*x %*.*X %*.*%", w, p, c, w, p, s, w, p, d, w, p, i, w, p, u, w, p, x, w, p, X, w, p);
//	printf("\n%d\n", len2);
//	len2 = ft_printf("%-*.*c %-*.*s %-*.*d %-*.*i %-*.*u %-*.*x %-*.*X %-*.*%", w, p, c, w, p, s, w, p, d, w, p, i, w, p, u, w, p, x, w, p, X, w, p);
//	printf("\n%d\n", len2);
//	len2 = ft_printf("%*c %*s %*d %*i %*u %*x %*X %*%", w, c, w, s, w, d, w, i, w, u, w, x, w, X, w);
//	printf("\n%d\n", len2);
//	len2 = ft_printf("%*.*c %*.*s %*.*d %*.*i %*.*u %*.*x %*.*X %*.*%", w, p, c, w, p, s, w, p, d, w, p, i, w, p, u, w, p, x, w, p, X, w, p);
//	printf("\n%d\n", len2);
//	len2 = ft_printf("%*.*x %*.*X %%", w, p, x, w, p, X, w, p);
//	printf("\n%d\n", len2);
//	len2 = ft_printf("%*.*c %*.*s %*.*d %*.*i %*.*u %*.*x %*.*X %%", w, p, c, w, p, s, w, p, d, w, p, i, w, p, u, w, p, x, w, p, X, w, p);
//	printf("\n%d\n", len2);
//	len2 = ft_printf("%*.*c %*.*s %*.*d %*.*i %*.*u %*.*x %*.*X %%", w, p, c, w, p, s, w, p, d, w, p, i, w, p, u, w, p, x, w, p, X, w, p);
//	printf("\n%d\n", len2);
//	len2 = ft_printf("%*.*c %*.*s  %*.*d %*.*i %*.*u %*.*x %*.*X %*.*%", w, p, c, w, p, s, w, p, d, w, p, i, w, p, u, w, p, x, w, p, X, w, p);
//	printf("\n%d\n", len2);
//	len2 = ft_printf("%*.*c %*.*s %*.*d %*.*i %*.*u %*.*x %*.*X %*.*%", w, p, c, w, p, s, w, p, d, w, p, i, w, p, u, w, p, x, w, p, X, w, p);
//	printf("\n%d\n", len2);
//	len2 = ft_printf("%0*p", w, p, NULL);
//    printf("\n%d\n", len2);
//	len2 = ft_printf("%*.*p", w, p, &w);
//	printf("\n%d\n", len2);
//len = ft_printf("%.*i, %.*d, %.*d, %.*d, %.*d, %.*d, %.*d, %.*d", a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
//len = ft_printf("%*.*i, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d", a, b, i, a, b, j, a, b, k, a, b, l, a, b, m, a, b, c, a, b, e, a, b, d);
//len = ft_printf("%.*u, %.*x, %.*X, %.*u, %.*x, %.*X, %.*u, %.*x, %.*X, %.*u, %.*x, %.*X, %.*u, %.*x, %.*X, %.*u, %.*x, %.*X, %.*u, %.*x, %.*X, %.*u, %.*x, %.*X", a, i, a, i, a, i, a, j, a, j, a, j, a, k, a, k, a, k, a, l, a, l, a, l, a, m, a, m, a, m, a, c, a, c, a, c, a, d, a, d, a, d, a, e, a, e, a, e);
//    len = ft_printf(" %-*x, %-*p, %-*x, %-*p, %-*x", a, 207038912, a, (void *) 1, a, 1, a, NULL, a, 0);
//len = ft_printf("%14p", &len);
//len = ft_printf("%53c%0189.51d%-103.21d%*x%102c" ,-27,231647176,-1119242596,-94,(void*)17541392615378030860lu,80);
//printf("\n%d\n", len);
//len = printf("%53c%0189.51d%-103.21d%*x%102c" ,-27,231647176,-1119242596,-94,(void*)17541392615378030860lu,80);
len = ft_printf("%-09s", "hello");
printf("\n%d\n", len);

}