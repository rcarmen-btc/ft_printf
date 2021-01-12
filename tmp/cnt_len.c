#include <stdio.h>
#include <unistd.h>

int main()
{
	char buff[1001];
	int rs = read(0, buff, 1000);
	int i = 0;
	char *el = buff;

	buff[rs] = 0;
	printf("Output:\n");
	while (*el != 0)
	{
		if (*el == ' ')
			write(1, "^", 1);
		else
			write(1, el, 1);
		el++;
		i++;
	}
	printf("\nYou enter %d characters.\n", i);
}

