/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rinacio <rinacio@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 00:08:39 by rinacio           #+#    #+#             */
/*   Updated: 2022/02/18 05:11:20 by rinacio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb);

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) != 1)
	{
		nb++;
	}
	return (nb);
}

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	i = 3;
	while (i < 46340 && i * i < nb)
	{
		if (nb % i == 0)
			return (0);
		else
			i++;
	}
	return (1);
}
