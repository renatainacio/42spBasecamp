/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rinacio <rinacio@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 14:20:52 by rinacio           #+#    #+#             */
/*   Updated: 2022/02/09 13:41:54 by rinacio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb, int n);

int		f_num_alg(int nb);

int		pow_10(int x);

int		ft_is_printable(int number);

void	ft_print_combn(int n)
{
	int	number;
	int	max;
	int	i;

	i = 0;
	max = 0;
	if (n == 1)
		write (1, "0, ", 3);
	while (i < n)
	{
		max = max + pow_10(i) * (9 - i);
		i++;
	}
	number = pow_10(n - 2);
	while (number <= max)
	{
		if (ft_is_printable(number) == 1)
		{
			ft_putnbr(number, n);
			if (number < max)
				write (1, ", ", 2);
		}
		number++;
	}
}

int	pow_10(int x)
{
	int	i;
	int	p;

	p = 1;
	i = 0;
	while (i < x)
	{
		p = 10 * p;
		i++;
	}
	return (p);
}

void	ft_putnbr(int nb, int n)
{
	int	alg;
	int	ascii;
	int	count;

	count = 1;
	alg = f_num_alg(nb);
	if (alg < n)
		write (1, "0", 1);
	count = 1;
	while (count <= alg)
	{
		ascii = nb / pow_10((alg - count)) + 48;
		write (1, &ascii, 1);
		nb = nb - nb / pow_10 ((alg - count)) * pow_10 ((alg - count));
		count++;
	}
}

int	f_num_alg(int nb)
{	
	int	n;
	int	number;

	number = nb;
	n = 0;
	while (number > 9)
	{
		number = number / 10;
		n++;
	}
	n++;
	return (n);
}

int	ft_is_printable(int number)
{
	int	nb;

	nb = number;
	while (nb > 0)
	{
		if (nb % 10 <= ((nb / 10) % 10))
		{
			return (0);
		}
		nb = nb / 10;
	}
	return (1);
}
