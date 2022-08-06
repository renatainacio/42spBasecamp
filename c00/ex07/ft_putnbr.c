/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rinacio <rinacio@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 14:42:24 by rinacio           #+#    #+#             */
/*   Updated: 2022/02/11 16:06:37 by rinacio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		f_num_alg(int nb);

int		pow_10(int x);

void	ft_putnbr(int nb)
{
	int	n;
	int	ascii; //-2147483648 até 2147483647
	int	count;

	if (nb < 0)
	{
		write (1, "-", 1);
	}
	count = 1;
	n = f_num_alg(nb);
	while (count <= n)
	{
		if (nb >= 0)
		ascii = nb / pow_10((n - count)) + 48; 
		else
		ascii = - (nb / pow_10((n - count))) + 48;
		write (1, &ascii, 1);
		nb = nb - nb / pow_10 ((n - count)) * pow_10 ((n - count));
		count++;
	}
}

int	f_num_alg(int nb)
{	
	int	n;
	int	number;

	number = nb;
	n = 0;
	while (number > 9 || number < -9)
	{
		number = number / 10;
		n++;
	}
	n++;
	return (n);
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
