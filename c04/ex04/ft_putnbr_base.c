/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rinacio <rinacio@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 15:06:31 by rinacio           #+#    #+#             */
/*   Updated: 2022/02/16 18:14:00 by rinacio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	strl(char *str);
int	count_alg(int nbr, int nbase);
int	pwr(int nbase, int n_alg);
int	validbase(char *base);

void	ft_putnbr_base(int nbr, char *base)
{
	int	nbase;
	int	n;
	int	n_alg;

	nbase = strl(base);
	if (nbase <= 1 || validbase(base) == 0)
		write (1, "0", 1);
	else
	{
		if (nbr < 0)
		{
			write (1, "-", 1);
		}
		n_alg = count_alg(nbr, nbase);
		while (n_alg > 0)
		{
			n = nbr / (pwr(nbase, (n_alg - 1)));
			if (n < 0)
				n = -n;
			write (1, &base[n], 1);
			nbr = nbr % (pwr(nbase, (n_alg - 1)));
			n_alg--;
		}
	}
}	

int	strl(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	count_alg(int nbr, int nbase)
{
	int	n_alg;

	n_alg = 0;
	while (nbr >= nbase || nbr <= -nbase)
	{
		nbr = nbr / nbase;
		n_alg++;
	}
	return (n_alg + 1);
}

int	pwr(int nbase, int n_alg)
{
	int	pwr;

	pwr = 1;
	while (n_alg > 0)
	{
		pwr = pwr * nbase;
		n_alg--;
	}
	return (pwr);
}

int	validbase(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}	
		i++;
	}
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	return (1);
}
