/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rinacio <rinacio@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 20:43:22 by rinacio           #+#    #+#             */
/*   Updated: 2022/02/18 17:34:20 by rinacio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	pwr_n;

	if (power < 0)
		return (0);
	pwr_n = 1;
	if (power > 1)
		pwr_n = ft_recursive_power(nb, (power - 1)) * nb;
	if (power == 1)
		pwr_n = nb;
	return (pwr_n);
}


2 ^3 = 2 * 2^2
2 ^5 = 2 * 2^4

2^5 = 16 * 2 = 32
2^4 = 8 * 2 = 16
2^3 = 4 * 2 = 8
2^2 = 2^1 * 2 = 4
2^1 = 2

