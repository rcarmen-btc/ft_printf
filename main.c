#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft/libft.h"
#include "includes/ft_printf.h"

int main() {
	int w = 5;
	//int p = 0;

	//char c = 65;
	//char *s = "hello";
	//int *pr = &w;
	//int	d = 200;
	//int i = d;
	//int u = d;
	//int x = 23;
	//int X = x;
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

	//len2 = ft_printf("%.i, %.d, %.d, %.d, %.d, %.d, %.d, %.d", 8, -12, 123456789, 0, -12345678, 97, -2147483648, 2147483647);
	//printf("\n%d\n", len2);
	//len2 = ft_printf("%*s%198.3u", -62, "32", 45, 2133259791u);
	//printf("\n%d\n", len2);
	//len2 = ft_printf("%*.*c %*.*s %*.*d %*.*i %*.*u %*.*x %*.*X %*.*%", w, p, c, w, p, s, w, p, d, w, p, i, w, p, u, w, p, x, w, p, X, w, p);
	//printf("\n%d\n", len2);
	//len2 = ft_printf("%-*.*c %-*.*s %-*.*d %-*.*i %-*.*u %-*.*x %-*.*X %-*.*%", w, p, c, w, p, s, w, p, d, w, p, i, w, p, u, w, p, x, w, p, X, w, p);
	//printf("\n%d\n", len2);
	//len2 = ft_printf("%*c %*s %*d %*i %*u %*x %*X %*%", w, c, w, s, w, d, w, i, w, u, w, x, w, X, w);
	//printf("\n%d\n", len2);
	//len2 = ft_printf("%*.*c %*.*s %*.*d %*.*i %*.*u %*.*x %*.*X %*.*%", w, p, c, w, p, s, w, p, d, w, p, i, w, p, u, w, p, x, w, p, X, w, p);
	//printf("\n%d\n", len2);
	//len2 = ft_printf("%*.*x %*.*X %%", w, p, x, w, p, X, w, p);
	//printf("\n%d\n", len2);
	//len2 = ft_printf("%*.*c %*.*s %*.*d %*.*i %*.*u %*.*x %*.*X %%", w, p, c, w, p, s, w, p, d, w, p, i, w, p, u, w, p, x, w, p, X, w, p);
	//printf("\n%d\n", len2);
	//len2 = ft_printf("%*.*c %*.*s %*.*d %*.*i %*.*u %*.*x %*.*X %%", w, p, c, w, p, s, w, p, d, w, p, i, w, p, u, w, p, x, w, p, X, w, p);
	//printf("\n%d\n", len2);
	//len2 = ft_printf("%*.*c %*.*s  %*.*d %*.*i %*.*u %*.*x %*.*X %*.*%", w, p, c, w, p, s, w, p, d, w, p, i, w, p, u, w, p, x, w, p, X, w, p);
	//printf("\n%d\n", len2);
	//len2 = ft_printf("%*.*c %*.*s %*.*d %*.*i %*.*u %*.*x %*.*X %*.*%", w, p, c, w, p, s, w, p, d, w, p, i, w, p, u, w, p, x, w, p, X, w, p);
	//printf("\n%d\n", len2);
	//len2 = ft_printf("%0*p", w, p, NULL);
    //printf("\n%d\n", len2);
	//len2 = ft_printf("%*.*p", w, p, &w);
	#define LONG_MAX 9223372036854775807L
	#define LONG_MIN -9223372036854775808L
	//printf("\n%d\n", len2);
	//printf(" %10p %-10p ", 0, 0);
	//printf(" %p %p ", LONG_MIN, LONG_MAX);
	ft_printf("%%*.c%c%%*.s*%ps%%*.X", '0', NULL);
	//len =  printf(" .-0*%*p hel. ", 11, 101, 11, 42);

// p - 0x0
// .p -  0x
// .0p - 0x
}
