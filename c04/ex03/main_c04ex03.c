#include <stdio.h>

int	ft_atoi(char *str);

int main()
{
	int i;

	i = ft_atoi("      +--+-+-+-+-+---+-2156323348teste");
	i = ft_atoi("      +--+-+-+-+-+---+-0teste");
	printf("%d\n", i);
}