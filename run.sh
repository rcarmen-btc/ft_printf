#!/bin/bash

gcc main.c libftprintf.a -I./libft/ -I./includes && ./a.out
gcc main.c libftprintf2.a -I./libft/ -I./includes && ./a.out

	#printf("|'%%c', 65| = %d\n", ft_printf("%c", 65));
	#printf("|'%%.c', 65| = %d\n", ft_printf("%.c", 65));
	#printf("|'%%10c', 65| = %d\n", ft_printf("%10c", 65));
	#printf("|'%%10.4c', 65|= %d\n", ft_printf("%10.4c", 65));
	#printf("|'%%10.c', 65|= %d\n", ft_printf("%10.c", 65));
	#printf("|'%%.4c', 65| = %d\n", ft_printf("%.4c", 65));
	#printf("|'%%.1c', 65| = %d\n", ft_printf("%.1c", 65));
	#printf("|'%%1.1c', 65| = %d\n", ft_printf("%1.1c", 65));

	#	printf("|'%%s', ''| = %d\n", ft_printf("%s", ""));
	#printf("|'%%s', 'Hola'| = %d\n", ft_printf("%s", "Hola"));
	#printf("|'%%4s', 'Hola'| = %d\n", ft_printf("%4s", "Hola"));
	#printf("|'%%6s', 'Hola'| = %d\n", ft_printf("%6s", "Hola"));
	#printf("|'%%2s', 'Hola'| = %d\n", ft_printf("%2s", "Hola"));

	#printf("|'%%-s', ''| = %d\n", ft_printf("%-s", ""));
	#printf("|'%%-s', 'Hola'| = %d\n", ft_printf("%-s", "Hola"));
	#printf("|'%%-4s', 'Hola'| = %d\n", ft_printf("%-4s", "Hola"));
	#printf("|'%%-6s', 'Hola'| = %d\n", ft_printf("%-6s", "Hola"));
	#printf("|'%%-2s', 'Hola'| = %d\n", ft_printf("%-2s", "Hola"));

	#printf("|'%%0s', ''| = %d\n", ft_printf("%0s", ""));
	#printf("|'%%0s', 'Hola'| = %d\n", ft_printf("%0s", "Hola"));
	#printf("|'%%04s', 'Hola'| = %d\n", ft_printf("%04s", "Hola"));
	#printf("|'%%06s', 'Hola'| = %d\n", ft_printf("%06s", "Hola"));
	#printf("|'%%02s', 'Hola'| = %d\n", ft_printf("%02s", "Hola"));

	#printf("|'%%.s', ''| = %d\n", ft_printf("%s", ""));
	#printf("|'%%.s', 'Hola'| = %d\n", ft_printf("%s", "Hola"));
	#printf("|'%%.4s', 'Hola'| = %d\n", ft_printf("%.4s", "Hola"));
	#printf("|'%%.6s', 'Hola'| = %d\n", ft_printf("%.6s", "Hola"));
	#printf("|'%%.2s', 'Hola'| = %d\n", ft_printf("%.2s", "Hola"));

	#printf("|'%%.s', ''| = %d\n", ft_printf("%s", ""));
	#printf("|'%%.s', 'Hola'| = %d\n", ft_printf("%s", "Hola"));
	#printf("|'%%9.4s', 'Hola'| = %d\n", ft_printf("%.4s", "Hola"));
	#printf("|'%%5.6s', 'Hola'| = %d\n", ft_printf("%.6s", "Hola"));
	#printf("|'%%5.2s', 'Hola'| = %d\n", ft_printf("%.2s", "Hola"));

	#printf("|'%%1.1s', 'Hola'| = %d\n", ft_printf("%1.1s", "Hola"));



	#	printf("|'%%x', 0| = %d\n", ft_printf("%x", 0));
	#printf("|'%%x', 54700| = %d\n", ft_printf("%x", 54700));
	#printf("|'%%4x', 54700| = %d\n", ft_printf("%4x", 54700));
	#printf("|'%%6x', 54700| = %d\n", ft_printf("%6x", 54700));
	#printf("|'%%2x', 54700| = %d\n", ft_printf("%2x", 54700));

	#printf("|'%%-x', 0| = %d\n", ft_printf("%-x", 0));
	#printf("|'%%-x', 54700| = %d\n", ft_printf("%-x", 54700));
	#printf("|'%%-4x', 54700| = %d\n", ft_printf("%-4x", 54700));
	#printf("|'%%-6x', 54700| = %d\n", ft_printf("%-6x", 54700));
	#printf("|'%%-2x', 54700| = %d\n", ft_printf("%-2x", 54700));

	#printf("|'%%0x', 0| = %d\n", ft_printf("%0x", 0));
	#printf("|'%%0x', 54700| = %d\n", ft_printf("%0x", 54700));
	#printf("|'%%04x', 54700| = %d\n", ft_printf("%04x", 54700));
	#printf("|'%%06x', 54700| = %d\n", ft_printf("%06x", 54700));
	#printf("|'%%02x', 54700| = %d\n", ft_printf("%02x", 54700));

	#printf("|'%%.x', 0| = %d\n", ft_printf("%x", 0));
	#printf("|'%%.x', 54700| = %d\n", ft_printf("%x", 54700));
	#printf("|'%%.4x', 54700| = %d\n", ft_printf("%.4x", 54700));
	#printf("|'%%.6x', 54700| = %d\n", ft_printf("%.6x", 54700));
	#printf("|'%%.2x', 54700| = %d\n", ft_printf("%.2x", 54700));

	#printf("|'%%.x', 0| = %d\n", ft_printf("%x", 0));
	#printf("|'%%.x', 54700| = %d\n", ft_printf("%x", 54700));
	#printf("|'%%9.4x', 54700| = %d\n", ft_printf("%.4x", 54700));
	#printf("|'%%5.6x', 54700| = %d\n", ft_printf("%.6x", 54700));
	#printf("|'%%5.2x', 54700| = %d\n", ft_printf("%.2x", 54700));

	#printf("|'%%1.1x', 54700| = %d\n", ft_printf("%1.1x", 54700));

	#printf("|'%%p', 0| = %d\n", ft_printf("%p", &a));
	#printf("|'%%p', &a| = %d\n", ft_printf("%p", &a));
	#printf("|'%%4p', &a| = %d\n", ft_printf("%4p", &a));
	#printf("|'%%6p', &a| = %d\n", ft_printf("%6p", &a));
	#printf("|'%%2p', &a| = %d\n", ft_printf("%2p", &a));

	#printf("|'%%-p', 0| = %d\n", ft_printf("%-p", 0));
	#printf("|'%%-p', &a| = %d\n", ft_printf("%-p", &a));
	#printf("|'%%-4p', &a| = %d\n", ft_printf("%-4p", &a));
	#printf("|'%%-6p', &a| = %d\n", ft_printf("%-6p", &a));
	#printf("|'%%-2p', &a| = %d\n", ft_printf("%-2p", &a));

	#printf("|'%%0p', 0| = %d\n", ft_printf("%0p", 0));
	#printf("|'%%0p', &a| = %d\n", ft_printf("%0p", &a));
	#printf("|'%%04p', &a| = %d\n", ft_printf("%04p", &a));
	#printf("|'%%06p', &a| = %d\n", ft_printf("%06p", &a));
	#printf("|'%%02p', &a| = %d\n", ft_printf("%02p", &a));

	#printf("|'%%.p', 0| = %d\n", ft_printf("%p", 0));
	#printf("|'%%.p', &a| = %d\n", ft_printf("%p", &a));
	#printf("|'%%.4p', &a| = %d\n", ft_printf("%.4p", &a));
	#printf("|'%%.6p', &a| = %d\n", ft_printf("%.6p", &a));
	#printf("|'%%.2p', &a| = %d\n", ft_printf("%.2p", &a));

	#printf("|'%%.p', 0| = %d\n", ft_printf("%p", 0));
	#printf("|'%%.p', &a| = %d\n", ft_printf("%p", &a));
	#printf("|'%%9.4p', &a| = %d\n", ft_printf("%.4p", &a));
	#printf("|'%%5.6p', &a| = %d\n", ft_printf("%.6p", &a));
	#printf("|'%%5.2p', &a| = %d\n", ft_printf("%.2p", &a));

	#printf("|'%%1.1p', &a| = %d\n", ft_printf("%1.1p", &a));
	#printf("ldksjf;lakds");
	#printf("|'%%p', 0| = %d\n", printf("%p", &a));
	#printf("|'%%p', &a| = %d\n", printf("%p", &a));
	#printf("|'%%4p', &a| = %d\n", printf("%4p", &a));
	#printf("|'%%6p', &a| = %d\n", printf("%6p", &a));
	#printf("|'%%2p', &a| = %d\n", printf("%2p", &a));

	#printf("|'%%-p', 0| = %d\n", printf("%-p", 0));
	#printf("|'%%-p', &a| = %d\n", printf("%-p", &a));
	#printf("|'%%-4p', &a| = %d\n", printf("%-4p", &a));
	#printf("|'%%-6p', &a| = %d\n", printf("%-6p", &a));
	#printf("|'%%-2p', &a| = %d\n", printf("%-2p", &a));

	#printf("|'%%0p', 0| = %d\n", printf("%0p", 0));
	#printf("|'%%0p', &a| = %d\n", printf("%0p", &a));
	#printf("|'%%04p', &a| = %d\n", printf("%04p", &a));
	#printf("|'%%06p', &a| = %d\n", printf("%06p", &a));
	#printf("|'%%02p', &a| = %d\n", printf("%02p", &a));

	#printf("|'%%.p', 0| = %d\n", printf("%p", 0));
	#printf("|'%%.p', &a| = %d\n", printf("%p", &a));
	#printf("|'%%.4p', &a| = %d\n", printf("%.4p", &a));
	#printf("|'%%.6p', &a| = %d\n", printf("%.6p", &a));
	#printf("|'%%.2p', &a| = %d\n", printf("%.2p", &a));

	#printf("|'%%.p', 0| = %d\n", printf("%p", 0));
	#printf("|'%%.p', &a| = %d\n", printf("%p", &a));
	#printf("|'%%9.4p', &a| = %d\n", printf("%.4p", &a));
	#printf("|'%%5.6p', &a| = %d\n", printf("%.6p", &a));
	#printf("|'%%5.2p', &a| = %d\n", printf("%.2p", &a));

	#printf("|'%%1.1p', &a| = %d\n", printf("%1.1p", &a));
