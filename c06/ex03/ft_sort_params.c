/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rinacio <rinacio@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 18:15:48 by rinacio           #+#    #+#             */
/*   Updated: 2022/02/17 18:23:51 by rinacio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char *argv[], int argc);
int		ft_strcmp(char *s1, char *s2);
int		ft_is_sorted(char *argv[], int argc);

int	main(int argc, char *argv[])
{
	int		i;
	int		sort;
	char	*aux;

	sort = ft_is_sorted(argv, argc);
	while (sort < (argc - 2))
	{		
		i = sort + 1;
		while (i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) < 0)
			{
				aux = argv[i + 1];
				argv[i + 1] = argv[i];
				argv[i] = aux;
			}
			i++;
		}
		sort = ft_is_sorted(argv, argc);
	}
	ft_write(argv, argc);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int	ft_is_sorted(char *argv[], int argc)
{
	int	i;
	int	sort;

	i = 2;
	sort = 0;
	while (i < argc)
	{
		if (ft_strcmp(argv[i - 1], argv[i]) >= 0)
			sort++;
		else
			return (sort);
	i++;
	}
	return (sort);
}

void	ft_write(char *argv[], int argc)
{
	int	i;
	int	j;

	i = argc - 1;
	while (i > 0)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write (1, "\n", 1);
		i--;
	}
}
