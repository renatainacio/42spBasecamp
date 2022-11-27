#include <stdio.h>

int ft_atoi_base(char *str, char *base);

int	main()
{
	int a;
	
	a = ft_atoi_base("       -+-+-+--+---T6AE", "012EA56T89"); //7643
	printf("%d\n", a);
	a = ft_atoi_base("       -+-+-+--+---223D", "0123456T89ABCDEF"); //8765
	printf("%d\n", a);
}