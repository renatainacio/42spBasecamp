/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rinacio <rinacio@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 14:12:44 by rinacio           #+#    #+#             */
/*   Updated: 2022/02/10 02:30:04 by rinacio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sorted(int *tab, int size);

void	ft_sort_int_tab(int *tab, int size)
{
	int	aux;
	int	n;

	aux = 0;
	n = ft_is_sorted(&tab[0], size);
	while (n < size - 1)
	{
		aux = *(tab + n + 1);
		*(tab + n + 1) = *(tab + n);
		*(tab + n) = aux;
		n = ft_is_sorted(&tab[0], size);
	}
}

int	ft_is_sorted(int *tab, int size)
{
	int	i;
	int	sort;

	i = 1;
	sort = 0;
	while (i < size)
	{
		if (*(tab + i) >= *(tab + i - 1))
			sort++;
		else
			return (sort);
	i++;
	}
	return (sort);
}
