#include <stdlib.h>

int *ft_range(int min, int max)
{
	int *matrix;
	int	i;

	if (min > max)
		return (NULL);
	matrix = (int*) malloc(sizeof(int) * (max - min));
	if (matrix == NULL)
		return (0);
	i = 0;
	while (i < (max - min))
	{
		matrix[i] = min + i;
		i++;
	}
	return (matrix);
}