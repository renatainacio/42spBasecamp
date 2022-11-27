#include <stdio.h>

char	*ft_strdup(char *src);

int	main()
{
	char str1[7] = "banana";

	printf("%s", ft_strdup(str1));
}