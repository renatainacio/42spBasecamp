#include <stdio.h>

int *ft_range(int min, int max);

int main()
{
	int max;
	int min;
	int i;
	int *matrix;

	min = 3;
	max = 7;

	matrix = ft_range(min, max);
	i = 0;
	while (i < max - min)
	{
		printf("%d, ", matrix[i]);
		i++;
	}

}